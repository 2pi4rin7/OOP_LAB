#pragma once
#include "business.h"
class Premium:public Business{
    protected:
        int phidichvu;
    public:
        Premium(int sodem, int phidichvu);
        virtual int DoanhThu();
};