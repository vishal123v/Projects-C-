#pragma once

#include<vector>
#include <string>

#include "Item.h"

namespace FileNames
{
	const std::string OutputFile1 = "CustomerA.csv";
	const std::string OutputFile2 = "CustomerB.csv";
	const std::string OutputFile3 = "CustomerC.csv";
};

class Customer
{
public:
	virtual void GenerateFile(std::vector<Item> Items) = 0;

};
