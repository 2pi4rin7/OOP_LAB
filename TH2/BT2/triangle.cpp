#include <iostream>
#include "triangle.h"
#include "diem.h"
using namespace std;

Triangle::Triangle() {
    A = Diem(0, 0);
    B = Diem(0, 0);
    C = Diem(0, 0);
}

void Triangle::Nhap() {
    cout << "Nhap diem A: " << endl;
    A.Nhap();
    cout << "Nhap diem B: " << endl;
    B.Nhap();
    cout << "Nhap diem C: " << endl;
    C.Nhap();
}
void Triangle::Xuat() {
    cout << "Diem A: " << endl;
    A.Xuat();
    cout << "Diem B: " << endl;
    B.Xuat();
    cout << "Diem C: " << endl;
    C.Xuat();
}

void Triangle::TinhTien(float x, float y) {
    A.TinhTien(x, y);
    B.TinhTien(x, y);
    C.TinhTien(x, y);
}

void Triangle::PhongTo(float k) {
    A.PhongTo(k);    
    B.PhongTo(k);
    C.PhongTo(k);
}

void Triangle::ThuNho(float k) {
    A.PhongTo(k);    
    B.PhongTo(k);
    C.PhongTo(k);
}

void Triangle::Quay(Diem tam, int goc) {
    A.Quay(tam, goc);
    B.Quay(tam, goc);
    C.Quay(tam, goc);
}