#include "Forest.hpp"

void Forest::addRandomPlant()
{
	int type = rand() % 4;
	double height = 0.5 + (rand() % 150) / 10.0; 
	int fruitCount = 1 + rand() % 20;

	if (type == 1)
	{
		plants_.push_back(std::make_unique<AppleTree>(height, fruitCount));
	}
	else if (type == 2)
	{
		plants_.push_back(std::make_unique<OrangeTree>(height, fruitCount));
	}
	else if (type == 3)
	{
		plants_.push_back(std::make_unique<TomatoBush>(height, fruitCount));
	}
	else
	{
		plants_.push_back(std::make_unique<RaspberryBush>(height, fruitCount));
	}
}

void Forest::printPlants() const
{
	std::cout << "Растения в лесу:\n";

	for (const auto& plant : plants_) 
	{
		plant->printInfo();
		std::cout << std::endl;
	}
}

std::vector<std::unique_ptr<Plant>>& Forest::getPlants()
{
	return plants_;
}
