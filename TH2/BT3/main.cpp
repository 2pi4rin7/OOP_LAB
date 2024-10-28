#include <iostream>
#include "dagiac.h"
using namespace std;

int main()
{
    DaGiac dg;
    dg.Nhap();
    dg.Xuat();
    puts("ket qua phep tinh tien");
    dg.TinhTien(1, 1);
    dg.Xuat();
    puts("Ket qua phongto");
    dg.PhongTo(2);
    dg.Xuat();
    puts("Ket qua thunho");
    dg.ThuNho();
    dg.Xuat();
    puts("Ket qua phep quay");
    Diem tam(0, 0);
    dg.Quay(tam, 90);
    dg.Xuat();
    return 0;
}