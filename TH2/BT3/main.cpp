#include <iostream>
#include "dagiac.h"
using namespace std;

int main()
{
    DaGiac dg;
    dg.Nhap();
    dg.Xuat();
    dg.TinhTien(1, 1);
    dg.Xuat();
    dg.PhongTo(2);
    dg.Xuat();
    dg.ThuNho();
    dg.Xuat();
    Diem tam(0, 0);
    dg.Quay(tam, 90);
    dg.Xuat();
    return 0;
}