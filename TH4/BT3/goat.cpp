#include "giasuc.h"
#include "goat.h"

Goat::Goat(): GiaSuc(0, 0, 0){}

Goat::Goat(int quantitySpecies, int QuantityChild, int quantityMilk): 
    GiaSuc(quantitySpecies, QuantityChild, quantityMilk){}

std::string Goat::GetSound(){
    return this->Sound;
}

void Goat::update(){
    srand(time(NULL));
    this->quantitySpecies += this->QuantityChild;
    this->QuantityChild = rand() % this->quantitySpecies;
    for (int i=0; i<this->quantitySpecies; i++){
        this->quantityMilk += rand() % 11;
    }
}