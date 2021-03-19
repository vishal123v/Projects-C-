#pragma once
#include <string>

struct Item

{
std::string Id;
std::string Name;
double NetPrice;

Item(std::string id, std::string name, double netPrice)
{
	Id = id;
	Name = name;
	NetPrice = netPrice;
}

~Item() = default;

};