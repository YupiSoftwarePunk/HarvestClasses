#pragma once
#include "Plant.hpp"

class Bush : public Plant 
{
public:
    Bush(const std::string& n, double h, int fc) : Plant(n, h, fc) {}

    void printInfo() const override 
    {
        std::cout << "Куст - ";
        Plant::printInfo();
    }
};