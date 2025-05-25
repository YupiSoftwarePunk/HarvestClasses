#include "Fruit.hpp"

const std::string& Fruit::getName() const
{
    return name_;
}

double Fruit::getWeight() const
{
    return weight_;
}

void Fruit::printInfo() const
{
    std::cout << "����: " << name_ << ", ���: " << weight_ << " �";
}
