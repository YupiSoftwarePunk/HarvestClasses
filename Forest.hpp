#pragma once

#include <vector>
#include <iostream>

#include "Plant.hpp"
#include "AppleTree.hpp"
#include "OrangeTree.hpp"
#include "TomatoBush.hpp"
#include "Raspberry.hpp"


class Forest
{
private:
	std::vector<std::unique_ptr<Plant>> plants_;

public:
    void addRandomPlant();

    void printPlants() const;

    std::vector<std::unique_ptr<Plant>>& getPlants();
};

