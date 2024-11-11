#pragma once
#include <iostream>
using namespace std;

class SoPhuc{
    private:
        double thuc, ao;
    public:
        SoPhuc();
        SoPhuc(double Thuc, double Ao);
        friend SoPhuc operator+(SoPhuc a, SoPhuc b);
        friend SoPhuc operator-(SoPhuc a, SoPhuc b);
        friend SoPhuc operator*(SoPhuc a, SoPhuc b);
        friend SoPhuc operator/(SoPhuc a, SoPhuc b);
        bool operator==(SoPhuc sp);
        bool operator!=(SoPhuc sp);
        friend istream& operator>>(istream &is, SoPhuc &sp);
        friend ostream& operator<<(ostream &os, SoPhuc sp);
};