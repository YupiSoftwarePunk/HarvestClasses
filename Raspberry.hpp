#pragma once

#include "Bush.hpp"
#include "Berry.hpp"


class RaspberryBush : public Bush 
{
public:
    RaspberryBush(double h, int fc) : Bush("Малиновый куст", h, fc) {}

    std::unique_ptr<Fruit> createFruit() override 
    {
        return std::make_unique<Berry>("Малина", 5 + rand() % 3);
    }
};