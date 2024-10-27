#pragma once
#include "diem.h"

class DaGiac{
    private: 
        Diem *dinh;
        int n;
    public:
        void Nhap();
        void Xuat();
        void TinhTien(float x, float y);
        void PhongTo(float k);
        void ThuNho();
        void Quay(Diem tam, int goc);
        float DienTich();
};


