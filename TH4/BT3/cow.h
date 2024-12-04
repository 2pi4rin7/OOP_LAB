#pragma once    
#include "giasuc.h"
#include "iostream"
#include <string>
class Cow: public GiaSuc{
    private:
        std::string Sound = "Moooo";
    public:
        Cow();
        Cow(int quantitySpecies, int quantityChild, int solit);
        std::string GetSound();
        void update();
};