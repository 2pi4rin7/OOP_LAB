#include "thoigian.h"
ThoiGian::ThoiGian(){
    Gio = 0;
    Phut = 0;
    Giay = 0;
}
ThoiGian::ThoiGian(int gio, int phut, int giay) : Gio(gio), Phut(phut), Giay(giay) {}

int ThoiGian::TinhGiay(){
    return Gio*3600 + Phut*60 + Giay;
}

ThoiGian ThoiGian::TinhLaiGio(int giay){
    ThoiGian tg;
    giay =  giay%86400;
    tg.Gio = giay/3600;
    tg.Phut = (giay%3600)/60;
    tg.Giay = giay%60;
    return tg;
}

ThoiGian ThoiGian::operator+(int giay){
    return TinhLaiGio(this->TinhGiay() + giay);
}

ThoiGian ThoiGian::operator-(int giay){
    return TinhLaiGio(this->TinhGiay() - giay + 86400);
}

ThoiGian ThoiGian::operator+(ThoiGian tg){
    return TinhLaiGio(this->TinhGiay() + tg.TinhGiay());
}

ThoiGian ThoiGian::operator-(ThoiGian tg){
    return TinhLaiGio(this->TinhGiay() - tg.TinhGiay() + 86400);
}

ThoiGian ThoiGian::operator++(){
    return *this = TinhLaiGio(this->TinhGiay() + 1);
}

ThoiGian ThoiGian::operator++(int){
    ThoiGian tmp = *this;
    *this = TinhLaiGio(this->TinhGiay() + 1);
    return tmp;
}

ThoiGian ThoiGian::operator--(){
    return *this = TinhLaiGio(this->TinhGiay() - 1 + 86400);
} 

ThoiGian ThoiGian::operator--(int){
    ThoiGian tmp = *this;
    *this = TinhLaiGio(this->TinhGiay() - 1 + 86400);
    return tmp;
}

bool ThoiGian::operator==(ThoiGian tg){
    return this->TinhGiay() == tg.TinhGiay();
}

bool ThoiGian::operator!=(ThoiGian tg){
    return this->TinhGiay() != tg.TinhGiay();
}

bool ThoiGian::operator>=(ThoiGian tg)
{
    return this->TinhGiay() >= tg.TinhGiay();
}

bool ThoiGian::operator<=(ThoiGian tg){
    return this->TinhGiay() <= tg.TinhGiay();
}

bool ThoiGian::operator>(ThoiGian tg){
    return this->TinhGiay() > tg.TinhGiay();
}

bool ThoiGian::operator<(ThoiGian tg){
    return this->TinhGiay() < tg.TinhGiay();
}

istream& operator>>(istream &is, ThoiGian &tg){
    is >> tg.Gio >> tg.Phut >> tg.Giay;
    return is;
}

ostream& operator<<(ostream &os, ThoiGian tg){
    os<<tg.Gio<<":"<<tg.Phut<<":"<<tg.Giay;
    return os;
}