#pragma once

#include "Customer.h"

class CustomerC : public Customer
{
public:
	void GenerateFile(std::vector<Item> Items) override;
};