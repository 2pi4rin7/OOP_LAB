#include "tamgiac.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    TamGiac t;
    t.Nhap();
    t.Xuat();
    puts("Ket qua tinhtien");
    t.TinhTien(1, 1);
    t.Xuat();
    puts("Ket qua phongto");
    t.PhongTo(2);
    t.Xuat();
    puts("Ket qua thunho");
    t.ThuNho(0.5);
    t.Xuat();
    puts("Ket qua phep quay");
    t.Quay(Diem(0, 0), 90);
    t.Xuat();
    return 0;
}