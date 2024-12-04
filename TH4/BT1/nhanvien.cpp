#include "nhanvien.h"
NhanVien::NhanVien(){
    manv = ten = "";
    luongcb = 0;
}
NhanVien::NhanVien(string manv, string ten, int luongcb){
    this->manv = manv;
    this->ten = ten;
    this->luongcb = luongcb;
}

void NhanVien::Nhap(){
    cout << "Nhap ma nhan vien: ";   
    cin.ignore();
    cin >> manv;
    cout << "Nhap ten nhan vien: ";
    cin.ignore();
    getline(cin, ten);
    cout << "Nhap luong co ban: ";
    cin >> luongcb;
}

void NhanVien::Xuat(){
    cout<<"Ma so nhan vien: "<<manv<<endl;
    cout<<"Ten nhan vien: "<<ten<<endl;
    cout<<"Luong co ban: "<<luongcb<<endl;
}