#include "business.h"
Business::Business(int sodem = 0){
    this->sodem = sodem;
}
int Business::DoanhThu(){
    return sodem*300000;
}