#pragma once

#include <string>
#include <iostream>

// Базовый класс плодов растений
class Fruit
{
public:
    Fruit(const std::string& n, double w) : name_(n), weight_(w) {}
    virtual ~Fruit() = default;

    const std::string& getName() const;
    double getWeight() const;


    virtual void printInfo() const;

private:
    std::string name_;
    double weight_;
};

