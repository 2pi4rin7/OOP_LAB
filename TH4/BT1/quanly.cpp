#include "nhanvien.h"
#include "quanly.h"
QuanLy::QuanLy(){
    tylethuong = 0;
}
QuanLy::QuanLy(string manv, string ten, int luongcb, int tylethuong)
    :NhanVien(manv, ten, luongcb){
    this->tylethuong = tylethuong;
}
int QuanLy::TienThuong(){
    return luongcb * tylethuong / 100;
}

void QuanLy::Nhap(){
    NhanVien::Nhap();
    cout << "Nhap ty le thuong: ";
    cin >> tylethuong;
}

void QuanLy::Xuat(){
    cout<<"\n";
    NhanVien::Xuat();
    cout<<"Tien thuong: "<<TienThuong()<<endl;
    cout<<"\n";
}