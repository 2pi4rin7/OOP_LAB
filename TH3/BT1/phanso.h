#pragma once
#include <iostream>
using namespace std;

class PhanSo{
    private:
        int tu, mau;
    public:
        PhanSo();
        PhanSo(int Tu, int Mau);
        PhanSo(int Tu);
        PhanSo operator+(PhanSo ps);
        friend PhanSo operator+(int a, PhanSo ps);
        PhanSo operator-(PhanSo ps);
        friend PhanSo operator-(int a, PhanSo ps);
        PhanSo operator*(PhanSo ps);
        friend PhanSo operator*(int a, PhanSo ps);
        PhanSo operator/(PhanSo ps);
        friend PhanSo operator/(int a, PhanSo ps);
        bool operator==(PhanSo ps);
        bool operator!=(PhanSo ps);
        bool operator>=(PhanSo ps);
        bool operator<=(PhanSo ps);
        bool operator>(PhanSo ps);
        bool operator<(PhanSo ps);
        friend istream& operator>>(istream &is, PhanSo ps);
        friend ostream& operator<<(ostream &os, PhanSo ps);
};