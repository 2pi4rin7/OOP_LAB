#include <bits/stdc++.h>
#include "triangle.h"
using namespace std;
const float PI = 3.14;

int main()
{
    Triangle t;
    t.Nhap();
    float goc, d;
    cin>>goc>>d;
    float delx = cos(goc*PI/180)*d;
    float dely = sin(goc*PI/180)*d;
    t.TinhTien(delx, dely);
    t.Xuat();

    return 0;
}