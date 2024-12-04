#include "nhanvien.h"
#include "kysu.h"
KySu::KySu(){
    giolamthem = 0;
}
KySu::KySu(string manv, string ten, int luongcb, int giolam):
    NhanVien(manv, ten, luongcb){
        giolamthem = giolam;
}

int KySu::TienThuong(){
    return giolamthem * 100000;
}

void KySu::Nhap(){
    NhanVien::Nhap();
    cout << "Nhap so gio lam them: ";
    cin >> giolamthem;
}

void KySu::Xuat(){
    cout<<"\n";
    NhanVien::Xuat();
    cout<<"Tien thuong: "<<TienThuong()<<endl;
    cout<<"\n";
}