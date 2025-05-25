#pragma once

#include "Tree.hpp"
#include "Fruits.hpp"

class AppleTree : public Tree 
{
public:
    AppleTree(double h, int fc) : Tree("������", h, fc) {}

    std::unique_ptr<Fruit> createFruit() override 
    {
        return std::make_unique<Fruits>("������", 150 + rand() % 100);
    }
};