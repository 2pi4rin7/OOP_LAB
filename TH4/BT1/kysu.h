#pragma once
#include "nhanvien.h"
class KySu:public NhanVien{
    private:
        int giolamthem;
    public:
        KySu();
        KySu(string manv, string ten, int luongcb, int giolamthem);
        void Nhap();
        void Xuat();
        int TienThuong();
};
