#pragma once

#include "Tree.hpp"
#include "Fruits.hpp"

class OrangeTree : public Tree 
{
public:
    OrangeTree(double h, int fc) : Tree("Апельсиновое дерево", h, fc) {}

    std::unique_ptr<Fruit> createFruit() override 
    {
        return std::make_unique<Fruits>("Апельсин", 200 + rand() % 150);
    }
};