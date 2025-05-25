#pragma once

#include <iostream>
#include <string>
#include "Fruit.hpp"

// Базовый класс растений

class Plant
{
public:
    Plant(const std::string& n, double h, int fc) : name_(n), height_(h), fruitCount_(fc) {}
    virtual ~Plant() = default;

    virtual std::unique_ptr<Fruit> getFruit();

    virtual std::unique_ptr<Fruit> createFruit() = 0;

    bool hasFruits() const;
    const std::string& getName() const;


    virtual void printInfo() const;

private:
    std::string name_;
    double height_;
    int fruitCount_;
};

