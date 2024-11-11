#pragma once
#include <iostream>
using namespace std;

class ThoiGian{
    private:
        int Gio, Phut, Giay;
    public:
        ThoiGian();
        ThoiGian(int Gio, int Phut, int Giay);
        int TinhGiay();
        ThoiGian TinhLaiGio(int Giay);
        ThoiGian operator+(int Giay);
        ThoiGian operator-(int Giay);
        ThoiGian operator+(ThoiGian tg);
        ThoiGian operator-(ThoiGian tg);
        ThoiGian operator++();
        ThoiGian operator++(int);
        ThoiGian operator--();
        ThoiGian operator--(int);
        bool operator==(ThoiGian tg);
        bool operator!=(ThoiGian tg);
        bool operator>=(ThoiGian tg);
        bool operator<=(ThoiGian tg);
        bool operator>(ThoiGian tg);
        bool operator<(ThoiGian tg);
        friend istream& operator>>(istream &is, ThoiGian &tg);
        friend ostream& operator<<(ostream &os, ThoiGian tg);
};