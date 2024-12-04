#pragma once
#include <iostream>
#include <string>
class GiaSuc{
    protected:
        int quantitySpecies;
        int QuantityChild;
        int quantityMilk;
    public:
        GiaSuc(int quantitySpecies, int QuantityChild, int quantityMilk);
        int getMilk();
        int getQuantitySpecies();
        virtual std::string GetSound();
        virtual void update() = 0;
};