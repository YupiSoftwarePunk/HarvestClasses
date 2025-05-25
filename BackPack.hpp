#pragma once

#include <vector>
#include <iostream>

#include "Fruit.hpp"


class BackPack
{
private:
	std::vector<std::unique_ptr<Fruit>> fruits_;


public:
    void addFruit(std::unique_ptr<Fruit> fruit);

    void printContents() const;

    double getTotalWeight() const;
};

