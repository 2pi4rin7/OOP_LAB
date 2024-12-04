#pragma once
#include "nhanvien.h"
class QuanLy:public NhanVien{
    private:
        int tylethuong;
    public:
        QuanLy();
        QuanLy(string manv, string ten, int luongcb, int tylethuong);
        void Nhap();
        void Xuat();
        int TienThuong();

};