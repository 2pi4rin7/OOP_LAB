#pragma once
#include "ban.h"
using namespace std;

class BanTrai : public Ban{
private:
    int income;
public:
    BanTrai();
    BanTrai(string Name, int Ages, int Income);
    void Nhap();
    void Xuat();
    float ThoiGian(int n);
};