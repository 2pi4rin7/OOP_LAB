#pragma once
#include "ban.h"
using namespace std;

class BanTraiKhac : public Ban{
private:
    float attractiveness;
public:
    BanTraiKhac();
    BanTraiKhac(string Name, int Ages, float Attractiveness);
    void Nhap();
    void Xuat();
    float ThoiGian(int n);
};