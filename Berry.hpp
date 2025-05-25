#pragma once
#include "Fruit.hpp"


class Berry : public Fruit 
{
public:
    Berry(const std::string& n, double w) : Fruit(n, w) {}

    void printInfo() const override 
    {
        std::cout << "ягода: ";
        Fruit::printInfo();
    }
};