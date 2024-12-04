#include "deluxe.h"
#include "premium.h"
#include "business.h"
Deluxe::Deluxe(int sodem = 0, int phidichvu = 0, int phiphucvu =0):Premium(sodem, phidichvu){
    this->phiphucvu = phiphucvu;
}
int Deluxe::DoanhThu(){
    return sodem*750000 + phidichvu + phiphucvu;
}