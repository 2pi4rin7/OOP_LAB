#pragma once
#include <iostream>
#include <variant>
class NgayThangNam{
    private:
        int Ngay, Thang, Nam;
    public:
        NgayThangNam();
        NgayThangNam(int Ngay, int Thang, int Nam);
        int TinhNgay();
        NgayThangNam operator+(int Ngay);
        std::variant<NgayThangNam, std::string> operator-(int Ngay);
        NgayThangNam operator+(NgayThangNam ntn);
        std::variant<NgayThangNam, std::string> operator-(NgayThangNam ntn);
        NgayThangNam operator++();
        NgayThangNam operator++(int);
        std::variant<NgayThangNam, std::string> operator--();
        std::variant<NgayThangNam, std::string> operator--(int);
        bool operator==(NgayThangNam ntn);
        bool operator!=(NgayThangNam ntn);
        bool operator>=(NgayThangNam ntn);
        bool operator<=(NgayThangNam ntn);
        bool operator>(NgayThangNam ntn);
        bool operator<(NgayThangNam ntn);
        friend std::istream& operator>>(std::istream &is, NgayThangNam &ntn);
        friend std::ostream& operator<<(std::ostream &os, NgayThangNam ntn);
        friend std::ostream& operator<<(std::ostream &os, std::variant<NgayThangNam, std::string> ntn);
};