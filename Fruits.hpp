#pragma once

#include "Fruit.hpp"

class Fruits : public Fruit 
{
public:
    Fruits(const std::string& n, double w) : Fruit(n, w) {}

    void printInfo() const override 
    {
        std::cout << "������: ";
        Fruit::printInfo();
    }
};
