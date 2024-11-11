#pragma once
#include <iostream>
#include <variant>
using namespace std;

class PhanSo{
    protected:
        double tu, mau;
    public:
        PhanSo();
        PhanSo(double Tu, double Mau);
        friend const std::variant<PhanSo, double> operator+(PhanSo a, PhanSo b);
        friend const std::variant<PhanSo, double> operator-(PhanSo a, PhanSo b);
        friend const std::variant<PhanSo, double> operator*(PhanSo a, PhanSo b);
        friend const std::variant<PhanSo, double> operator/(PhanSo a, PhanSo b);
        bool operator==(PhanSo ps);
        bool operator!=(PhanSo ps);
        bool operator>=(PhanSo ps);
        bool operator<=(PhanSo ps);
        bool operator>(PhanSo ps);
        bool operator<(PhanSo ps);
        friend istream& operator>>(istream &is, PhanSo &ps);
        friend ostream& operator<<(ostream &os, const variant<PhanSo, double> &ps);
};