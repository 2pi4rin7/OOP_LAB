#include "sheep.h"
#include "giasuc.h"
#include <iostream>

Sheep::Sheep(): GiaSuc(0, 0, 0){}

Sheep::Sheep(int quantitySpecies, int QuantityChild, int quantityMilk): 
    GiaSuc(quantitySpecies, QuantityChild, quantityMilk){}
std::string Sheep::GetSound(){
    return this->Sound;
}

void Sheep::update(){
    srand(time(NULL));
    this->quantitySpecies += this->QuantityChild;
    this->QuantityChild = rand() % this->quantitySpecies;
    
    for (int i = 0 ; i< this->quantitySpecies; i++){
        this->quantityMilk += rand() % 6;
    }
}