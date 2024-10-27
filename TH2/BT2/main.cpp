#include "triangle.h"
using namespace std;

int main()
{
    Triangle t;
    t.Nhap();
    t.Xuat();
    t.TinhTien(1, 1);
    t.Xuat();
    t.PhongTo(2);
    t.Xuat();
    t.ThuNho(2);
    t.Xuat();
    t.Quay(Diem(0, 0), 90);
    t.Xuat();
    return 0;
}