#pragma once
#include <iostream>
using namespace std;
class NhanVien{
    protected:
        string manv, ten;
        int luongcb;
    public:
        NhanVien();
        NhanVien(string manv, string ten, int luongcb);
        virtual void Nhap();
        virtual void Xuat();
};