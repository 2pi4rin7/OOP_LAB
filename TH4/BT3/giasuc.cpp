#include "giasuc.h"
#include "goat.h"
#include "sheep.h"
#include "cow.h"

GiaSuc::GiaSuc(int quantitySpecies, int QuantityChild, int quantityMilk){
    this->quantitySpecies = quantitySpecies;
    this->QuantityChild = QuantityChild;
    this->quantityMilk = quantityMilk;
}

int GiaSuc::getQuantitySpecies(){
    return this->quantitySpecies;
}

int GiaSuc::getMilk(){
    return this->quantityMilk;
}

std::string GiaSuc::GetSound(){
    return "Sound";
}