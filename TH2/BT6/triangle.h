#pragma once
#include "diem.h"
class Triangle{
    private:
        Diem A, B, C;
    public:
        Triangle();
        void Nhap();
        void Xuat();
        void TinhTien(float x, float y);
        void PhongTo(float k);
        void ThuNho(float k);
        void Quay(Diem tam, int goc);
};