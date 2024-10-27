#include "dagiac.h"
#include <iostream>
using namespace std;

void DaGiac::Nhap() {
    cin >> n;
    dinh = new Diem[n];
    for (int i = 0; i < n; i++) {
        dinh[i].Nhap();
    }
}

void DaGiac::Xuat() {
    for (int i = 0; i < n; i++){
        cout << "Dinh thu " << i + 1 << endl;
        dinh[i].Xuat();
    }
}

void DaGiac::TinhTien(float x, float y) {
    for (int i = 0; i < n; i++) {
        dinh[i].TinhTien(x, y);
    }
}

void DaGiac::PhongTo(float k) {
    for (int i = 0; i < n; i++) {
        dinh[i].PhongTo(k);
    }
}

void DaGiac::ThuNho() {
    for (int i = 0; i < n; i++) {
        dinh[i].PhongTo(0.5);
    }
}

void DaGiac::Quay(Diem tam, int goc) {
    for (int i = 0; i < n; i++) {
        dinh[i].Quay(tam, goc);
    }
}

float DaGiac::DienTich()
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s += dinh[i].GetHoangDo() * dinh[(i + 1) % n].GetTungDo() - dinh[i].GetTungDo() * dinh[(i + 1) % n].GetHoangDo();
    }
    return abs(s) / 2;
}