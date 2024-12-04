#pragma once
#include "giasuc.h"
#include <iostream>
#include <string>
class Sheep: public GiaSuc{
    private:
        std::string Sound = "Beeee";
    public:
        Sheep();
        Sheep(int quantitySpecies, int quantityChild, int solit);
        std::string GetSound();
        void update();
};