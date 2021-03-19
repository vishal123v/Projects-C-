#include <fstream>
#include "CustomerA.h"

void CustomerA::GenerateFile(std::vector<Item> Items)
{
	std::ofstream fs;
	fs.open(FileNames::OutputFile1);
	fs << "ID" << "," << "Name" << "," << "Net Price" << std::endl;

	for (Item item : Items)
	{
		fs << item.Id << "," << item.Name << "," << item.NetPrice << std::endl;
	}

	fs.close();
}
