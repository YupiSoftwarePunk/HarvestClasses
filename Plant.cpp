#include "Plant.hpp"

std::unique_ptr<Fruit> Plant::getFruit()
{
    if (fruitCount_ > 0) 
    {
        fruitCount_--;
        return createFruit();
    }
    return nullptr;
}

bool Plant::hasFruits() const
{
    return fruitCount_ > 0;
}

const std::string& Plant::getName() const
{
    return name_;
}

void Plant::printInfo() const
{
    std::cout << "Растение: " << name_ << ", высота: " << height_
        << " м, плодов осталось: " << fruitCount_;
}
