#include <iostream>
#include "diem.h"
/*
Constructor khởi tạo giá trị mặc định.
*/
Diem::Diem() {
    iTung = 0;
    iHoanh = 0;
}


/*
Constructor khởi tạo giá trị cho hoành độ và tung độ.
*/
Diem::Diem(int Hoanh, int Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
}

/*
Copy Constructor.
*/
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

/*
Hàm trả về tung độ của điểm.
*/
int Diem::GetTungDo() {
    return iTung;
}

/* 
Hàm trả về hoành độ của điểm.
*/
int Diem::GetHoangDo() {
    return iHoanh;
}

/*
Hàm thiết lập giá trị cho tung độ.
*/
void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

/*
Hàm thiết lập giá trị cho hoành độ.
*/
void Diem::SetHoangDo(int Hoanh) {
    iHoanh = Hoanh;
}

/*
Hàm tịnh tiến điểm theo vector (x, y).
*/
void Diem::TinhTien(int x, int y) {
    iHoanh += x;
    iTung += y;
}