#pragma once
#include "ban.h"
#include "banthan.h"
#include "bantrai.h"
#include "bantraikhac.h"
using namespace std;

class DoiTuong{
private:
    Ban **ban;
    int n;
public:
    void Nhap();
    void Xuat();
};