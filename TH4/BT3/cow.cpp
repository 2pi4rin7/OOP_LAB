#include <iostream>
#include "giasuc.h"
#include "cow.h"

Cow::Cow(): GiaSuc(0, 0, 0){}

Cow::Cow(int quantitySpecies, int QuantityChild, int quantityMilk): 
    GiaSuc(quantitySpecies, QuantityChild, quantityMilk){}
std::string Cow::GetSound(){
    return this->Sound;
}

void Cow::update(){
    srand(time(NULL));
    this->quantitySpecies += this->QuantityChild;
    this->QuantityChild = rand() % this->quantitySpecies;
    for (int i=0; i<this->quantitySpecies; i++){
        this->quantityMilk += rand() % 21;
    }
}