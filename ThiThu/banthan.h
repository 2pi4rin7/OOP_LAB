#pragma once
#include "ban.h"
using namespace std;


class BanThan : public Ban{
private:
    string phone;
public:
    BanThan();
    BanThan(string Name, int Ages, string Phone);
    void Nhap();
    void Xuat();
    float ThoiGian(int n); 
};