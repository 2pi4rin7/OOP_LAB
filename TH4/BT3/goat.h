#pragma once
#include "giasuc.h"
#include <iostream>
#include <string>
class Goat: public GiaSuc{
    private:
        std::string Sound = "Meee";
    public:
        Goat();
        Goat(int quantitySpecies, int quantityChild, int solit);
        std::string GetSound();
        void update();
};