#pragma once
#include "diem.h"
class TamGiac{
    private:
        Diem A, B, C;
    public:
        TamGiac();
        void Nhap();
        void Xuat();
        void TinhTien(float x, float y);
        void PhongTo(float k);
        void ThuNho(float k);
        void Quay(Diem tam, int goc);
};
