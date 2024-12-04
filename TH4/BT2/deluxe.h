#pragma once
#include "premium.h"
class Deluxe:public Premium{
    protected:
        int phiphucvu;
    public:
        Deluxe(int sodem, int phidichvu, int phiphucvu);
        virtual int DoanhThu();
};