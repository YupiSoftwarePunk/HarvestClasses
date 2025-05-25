#pragma once

#include "Plant.hpp"

class Tree : public Plant 
{
public:
    Tree(const std::string& n, double h, int fc) : Plant(n, h, fc) {}

    void printInfo() const override 
    {
        std::cout << "Дерево - ";
        Plant::printInfo();
    }
};