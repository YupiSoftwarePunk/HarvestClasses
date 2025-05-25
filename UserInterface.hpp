#pragma once

#include "Forest.hpp"
#include "BackPack.hpp"


class ForestExplorer 
{
public:
    ForestExplorer(Forest& f, Backpack& b) : forest(f), backpack(b) {}

    void startExploration() 
    {
        while (true) 
        {
            printMenu();
            int choice = getChoice();

            if (!processChoice(choice)) 
            {
                break;
            }
        }
    }

private:

    Forest& forest;
    Backpack& backpack;

    void printMenu() const 
    {
        std::cout << "\n�� � ����. ��� �� ������ �������?\n";
        std::cout << "1. ��������� ��������\n";
        std::cout << "2. ������� ����� �� ���� ��������\n";
        std::cout << "3. ��������� ������\n";
        std::cout << "4. ����� �� ����\n";
    }


    int getChoice() const 
    {
        int choice;
        std::cin >> choice;

        return choice;
    }


    bool processChoice(int choice) 
    {
        if (choice == 1)
        {
            inspectPlants();
        }
        else if (choice == 2)
        {
            collectFruits();
        }
        else if (choice == 3)
        {
            checkBackpack();
        }
        else if (choice == 4)
        {
            leaveForest();
            return false;
        }
        else
        {
            std::cout << "�������� �����!!\n";
        }
        return true;
    }

    void inspectPlants() const 
    {
        forest.printPlants();
    }

    void collectFruits() 
    {
        int collected = 0;
        for (auto& plant : forest.getPlants()) 
        {
            while (plant->hasFruits()) {
                backpack.addFruit(plant->getFruit());
                collected++;
            }
        }
        std::cout << "������� " << collected << " ������.\n";
    }

    void checkBackpack() const 
    {
        backpack.printContents();
        std::cout << "����� ���: " << backpack.getTotalWeight() << " �\n";
    }

    void leaveForest() const
    {
        std::cout << "�� ��������� ���.\n";
    }
};