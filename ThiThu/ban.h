#pragma once
#include <bits/stdc++.h>
using namespace std;

class Ban{
protected:
    string name;
    int ages;
public:
    Ban();
    Ban(string name, int ages);
    virtual void Nhap() = 0;
    virtual void Xuat();   
    virtual float ThoiGian(int n) = 0; 
};