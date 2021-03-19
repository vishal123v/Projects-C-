#pragma once

#include "Customer.h"

class CustomerA : public Customer
{
public:
	void GenerateFile(std::vector<Item> Items) override;
};