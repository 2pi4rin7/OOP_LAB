#include <iostream>
#include "diem.h"
#include <cmath>
Diem::Diem() {
    iTung = 0;
    iHoanh = 0;
}

Diem::Diem(float Hoanh, float Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
}

Diem::Diem(const Diem& x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

void Diem::Nhap() {
    //std::cout << "Nhap hoanh do: ";
    std::cin >> iHoanh;
    //std::cout << "Nhap tung do: ";
    std::cin >> iTung;
}

void Diem::Xuat() {
    std::cout << "Hoanh do: " << iHoanh << std::endl;
    std::cout << "Tung do: " << iTung << std::endl;
}

float Diem::GetTungDo() {
    return iTung;
}
float Diem::GetHoangDo() {
    return iHoanh;
}
void Diem::SetTungDo(float Tung) {
    iTung = Tung;
}
void Diem::SetHoangDo(float Hoanh) {
    iHoanh = Hoanh;
}
void Diem::TinhTien(float x, float y) {
    iHoanh += x;
    iTung += y;
}

void Diem::Quay(Diem tam, int goc) {
    float x = iHoanh;
    float y = iTung;
    goc = goc * M_PI / 180.0;
    iHoanh = tam.iHoanh + (x - tam.iHoanh) * cos(goc) - (y - tam.iTung) * sin(goc);
    iTung = tam.iTung + (x - tam.iHoanh) * sin(goc) + (y - tam.iTung) * cos(goc);
}

void Diem::PhongTo(float k) {
    iHoanh *= k;
    iTung *= k;
}