#include "thoigian.h"
/*
Constructor khong tham so cua lop ThoiGian
*/
ThoiGian::ThoiGian(){
    Gio = 0;
    Phut = 0;
    Giay = 0;
}
/*
Constructor co tham so cua lop ThoiGian
*/
ThoiGian::ThoiGian(int gio, int phut, int giay) : Gio(gio), Phut(phut), Giay(giay) {}
/*
Phuong thuc chuyen doi Gio Phut Giay sang Giay
Input: None
Output: int
*/
int ThoiGian::TinhGiay(){
    return Gio*3600 + Phut*60 + Giay;
}
/*
Phuong thuc chuyen doi Giay sang Gio Phut Giay
Input: int giay
Output: ThoiGian
*/
ThoiGian ThoiGian::TinhLaiGio(int giay){
    ThoiGian tg;
    giay =  giay%86400;
    tg.Gio = giay/3600;
    tg.Phut = (giay%3600)/60;
    tg.Giay = giay%60;
    return tg;
}
/*
Phuong thuc cong thoi gian voi giay
Input: int giay
Output: ThoiGian
*/
ThoiGian ThoiGian::operator+(int giay){
    return TinhLaiGio(this->TinhGiay() + giay);
}
/*
Phuong thuc tru thoi gian voi giay
Input: int giay
Output: ThoiGian
*/
ThoiGian ThoiGian::operator-(int giay){
    return TinhLaiGio(this->TinhGiay() - giay + 86400);
}
/*
Phuong thuc cong thoi gian voi thoi gian
Input: ThoiGian tg
Output: ThoiGian
*/
ThoiGian ThoiGian::operator+(ThoiGian tg){
    return TinhLaiGio(this->TinhGiay() + tg.TinhGiay());
}
/*
Phuong thuc tru thoi gian voi thoi gian
Input: ThoiGian tg
Output: ThoiGian
*/
ThoiGian ThoiGian::operator-(ThoiGian tg){
    return TinhLaiGio(this->TinhGiay() - tg.TinhGiay() + 86400);
}
/*
Phuong thuc tang thoi gian len 1 giay
Input: None
Output: ThoiGian
*/
ThoiGian ThoiGian::operator++(){
    return *this = TinhLaiGio(this->TinhGiay() + 1);
}
/*
Phuong thuc tang thoi gian len 1 giay
Input: None
Output: ThoiGian
*/
ThoiGian ThoiGian::operator++(int){
    ThoiGian tmp = *this;
    *this = TinhLaiGio(this->TinhGiay() + 1);
    return tmp;
}
/*
Phuong thuc giam thoi gian di 1 giay
Input: None
Output: ThoiGian
*/
ThoiGian ThoiGian::operator--(){
    return *this = TinhLaiGio(this->TinhGiay() - 1 + 86400);
} 
/*
Phuong thuc giam thoi gian di 1 giay
Input: None
Output: ThoiGian
*/
ThoiGian ThoiGian::operator--(int){
    ThoiGian tmp = *this;
    *this = TinhLaiGio(this->TinhGiay() - 1 + 86400);
    return tmp;
}
/*
Phuong thuc so sanh bang giua hai thoi gian
Input: ThoiGian tg
Output: boolen
*/
bool ThoiGian::operator==(ThoiGian tg){
    return this->TinhGiay() == tg.TinhGiay();
}
/*
Phuong thuc so sanh khac giua hai thoi gian
Input: ThoiGian tg
Output: boolen
*/
bool ThoiGian::operator!=(ThoiGian tg){
    return this->TinhGiay() != tg.TinhGiay();
}
/*
Phuong thuc so sanh lon hoac bang giua hai thoi gian
Input: ThoiGian tg
Output: boolen
*/
bool ThoiGian::operator>=(ThoiGian tg)
{
    return this->TinhGiay() >= tg.TinhGiay();
}
/*
Phuong thuc so sanh be hon hoac bang giua hai thoi gian
Input: ThoiGian tg
Output: boolen
*/
bool ThoiGian::operator<=(ThoiGian tg){
    return this->TinhGiay() <= tg.TinhGiay();
}
/*
Phuong thuc so sanh lon hon giua hai thoi gian
Input: ThoiGian tg
Output: boolen
*/
bool ThoiGian::operator>(ThoiGian tg){
    return this->TinhGiay() > tg.TinhGiay();
}
/*
Phuong thuc so sanh be hon giua hai thoi gian
Input: ThoiGian tg
Output: boolen
*/
bool ThoiGian::operator<(ThoiGian tg){
    return this->TinhGiay() < tg.TinhGiay();
}
/*
Phuong thuc nhap du lieu cho thoi gian
Input: istream &is, ThoiGian &tg
Output: istream
*/
istream& operator>>(istream &is, ThoiGian &tg){
    is >> tg.Gio >> tg.Phut >> tg.Giay;
    return is;
}
/*
Phuong thuc xuat du lieu cho thoi gian
Input: ostream &os, ThoiGian tg
Output: ostream
*/
ostream& operator<<(ostream &os, ThoiGian tg){
    os<<tg.Gio<<":"<<tg.Phut<<":"<<tg.Giay;
    return os;
}