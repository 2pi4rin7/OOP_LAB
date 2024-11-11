#pragma once
#include <iostream>
class NgayThangNam{
    private:
        int Ngay, Thang, Nam;
    public:
        NgayThangNam();
        NgayThangNam(int Ngay, int Thang, int Nam);
        int TinhNgay();
        NgayThangNam ConverttoDate(int SoNgay);
        NgayThangNam operator+(int Ngay);
        NgayThangNam operator-(int Ngay);
        NgayThangNam operator+(NgayThangNam ntn);
        NgayThangNam operator-(NgayThangNam ntn);
        NgayThangNam operator++();
        NgayThangNam operator++(int);
        NgayThangNam operator--();
        NgayThangNam operator--(int);
        bool operator==(NgayThangNam ntn);
        bool operator!=(NgayThangNam ntn);
        bool operator>=(NgayThangNam ntn);
        bool operator<=(NgayThangNam ntn);
        bool operator>(NgayThangNam ntn);
        bool operator<(NgayThangNam ntn);
        friend std::istream& operator>>(std::istream &is, NgayThangNam &ntn);
        friend std::ostream& operator<<(std::ostream &os, NgayThangNam ntn);
};