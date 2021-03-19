/*
* As there is no Json parser for STL here I have used JsonCpp (a third party Json parser https://github.com/open-source-parsers/jsoncpp)
* Also there is no calculation given to find the VAT for the customerC I have considered as 0.05 of the NetPrice for this task.
*/

#include <iostream>
#include <vector>
#include <memory>
#include <json/json.h>

#include "Customer.h"
#include "CustomerA.h"
#include "CustomerB.h"
#include "CustomerC.h"
#include "Item.h"

std::string GetItemsJsonFromApi()
{
	return "{\"items\":[{\"id\":\"J1\",\"name\":\"USB Cable\",\"netPrice\":0.99},{\"id\":\"J2\",\"name\":\"Webcam\",\"netPrice\":19.99},{\"id\":\"J3\",\"name\":\"Laptop\",\"netPrice\":399},{\"id\":\"J4\",\"name\":\"Cherry Mouse;Grey Edition\",\"netPrice\":13}]}";
}

int main()
{
	std::vector<std::shared_ptr<Customer>> Customers;
	Customers.push_back(std::make_shared<CustomerA>());
	Customers.push_back(std::make_shared<CustomerB>());
	Customers.push_back(std::make_shared<CustomerC>());

	const auto jsonContent = GetItemsJsonFromApi();
	std::vector<Item>Items;

	Json::Value root;
	JSONCPP_STRING err;
	Json::CharReaderBuilder builder;
	const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
	reader->parse(jsonContent.c_str(), jsonContent.c_str() + jsonContent.length(), &root, &err);

	const Json::Value JsonValues = root["items"];

	for (unsigned index = 0; index < JsonValues.size(); ++index)
	{
		Items.push_back(
			Item(
				JsonValues[index]["id"].asString(),
				JsonValues[index]["name"].asString(),
				JsonValues[index]["netPrice"].asDouble()));
	}
	
	for (auto customer : Customers)
	{
		customer->GenerateFile(Items);
	}

	return 0;
}