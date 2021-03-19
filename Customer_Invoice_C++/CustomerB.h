#pragma once

#include "Customer.h"

class CustomerB : public Customer
{
public:
	void GenerateFile(std::vector<Item> Items) override;
};