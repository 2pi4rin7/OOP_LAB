#include "dagiac.h"
#include <iostream>
using namespace std;

void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    dinh = new Diem[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap dinh thu " << i + 1 << endl;
        dinh[i].Nhap();
    }
}

void DaGiac::Xuat() {
    for (int i = 0; i < n; i++){
        cout << "Dinh thu " << i + 1 << endl;
        dinh[i].Xuat();
    }
}

void DaGiac::TinhTien(int x, int y) {
    for (int i = 0; i < n; i++) {
        dinh[i].TinhTien(x, y);
    }
}

void DaGiac::PhongTo(int k) {
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