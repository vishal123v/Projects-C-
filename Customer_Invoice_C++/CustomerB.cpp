#include <fstream>
#include "CustomerB.h"

namespace
{
	const double ThresholdPrice = 50.0;
};

void CustomerB::GenerateFile(std::vector<Item> Items)
{
	std::ofstream fs;
	fs.open(FileNames::OutputFile2);
	fs << "ID" << "," << "Name" << "," << "Net Price" << std::endl;

	for (Item item : Items)
	{
		if (item.NetPrice < ThresholdPrice)
		{
			fs << item.Id << "," << item.Name << "," << item.NetPrice << std::endl;
		}
	}

	fs.close();
}
