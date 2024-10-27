#include <iostream>
#include "diem.h"

Diem::Diem() {
    iTung = 0;
    iHoanh = 0;
}

Diem::Diem(int Hoanh, int Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
}

Diem::Diem(const Diem& x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

void Diem::Nhap() {
    std::cout << "Nhap hoanh do: ";
    std::cin >> iHoanh;
    std::cout << "Nhap tung do: ";
    std::cin >> iTung;
}

void Diem::Xuat() {
    std::cout << "Hoanh do: " << iHoanh << std::endl;
    std::cout << "Tung do: " << iTung << std::endl;
}

int Diem::GetTungDo() {
    return iTung;
}
int Diem::GetHoangDo() {
    return iHoanh;
}
void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}
void Diem::SetHoangDo(int Hoanh) {
    iHoanh = Hoanh;
}
void Diem::TinhTien(int x, int y) {
    iHoanh += x;
    iTung += y;
}