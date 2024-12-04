#include "premium.h"
#include "business.h"
Premium::Premium(int sodem = 0, int phidichvu = 0):Business(sodem){
    this->phidichvu = phidichvu;
}
int Premium::DoanhThu(){
    return sodem*500000 + phidichvu;
}