#include <fstream>
#include "CustomerC.h"

namespace
{
	const double VAT = 0.05; // VAT is the 0.05 percentage of the Net Price
};

void CustomerC::GenerateFile(std::vector<Item> Items)
{
	std::ofstream fs;
	fs.open(FileNames::OutputFile3);
	fs << "Name" << "," << "Gross Price" << std::endl;

	for (Item item : Items)
	{
		fs << item.Name << "," << item.NetPrice + (VAT * item.NetPrice) << std::endl;
	}

	fs.close();
}
