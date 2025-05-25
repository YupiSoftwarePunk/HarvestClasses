#pragma once
#include "Fruit.hpp"

class Vegetable : public Fruit 
{
public:
    Vegetable(const std::string& n, double w) : Fruit(n, w) {}

    void printInfo() const override 
    {
        std::cout << "Овощ: ";
        Fruit::printInfo();
    }
};