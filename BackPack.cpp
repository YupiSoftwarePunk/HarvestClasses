#include "BackPack.hpp"

void BackPack::addFruit(std::unique_ptr<Fruit> fruit)
{
	if (fruit) 
	{
		fruits_.push_back(std::move(fruit));
	}
}

void BackPack::printContents() const
{
    if (fruits_.empty()) 
    {
        std::cout << "Рюкзак пуст.\n";
        return;
    }

    std::cout << "Содержимое рюкзака:\n";
    for (const auto& fruit : fruits_) 
    {
        fruit->printInfo();
        std::cout << std::endl;
    }
}

double BackPack::getTotalWeight() const
{
    double total = 0;

    for (const auto& fruit : fruits_) 
    {
        total += fruit->getWeight();
    }

    return total;
}

