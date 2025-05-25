#pragma once

#include "Bush.hpp"
#include "Vegetable.hpp"

class TomatoBush : public Bush 
{
public:
    TomatoBush(double h, int fc) : Bush("���� ���������", h, fc) {}

    std::unique_ptr<Fruit> createFruit() override 
    {
        return std::make_unique<Vegetable>("�������", 100 + rand() % 50);
    }
};