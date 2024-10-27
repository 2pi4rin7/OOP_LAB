#include "thisinh.h"
#include <bits/stdc++.h>
using namespace std;

ThiSinh::ThiSinh()
{
    Ten = "";
    MSSV = 0;
    iNgay = 0;
    iThang = 0;
    iNam = 0;
    fToan = 0;
    fVan = 0;
    fAnh = 0;
}

ThiSinh::ThiSinh(const ThiSinh &x)
{
    Ten = x.Ten;
    MSSV = x.MSSV;
    iNgay = x.iNgay;
    iThang = x.iThang;
    iNam = x.iNam;
    fToan = x.fToan;
    fVan = x.fVan;
    fAnh = x.fAnh;
}

void ThiSinh::Nhap()
{
    cout << "Nhap ten: ";
    getline(cin, Ten);
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap ngay thang nam sinh: ";
    cin >> iNgay >> iThang >> iNam;
    cout << "Nhap diem toan, van, anh: ";
    cin >> fToan >> fVan >> fAnh;
}

void ThiSinh::Xuat()
{
    cout << "Ten: " << Ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem toan, van, anh: " << fToan << ", " << fVan << ", " << fAnh << endl;
}

int ThiSinh::Tong()
{
    return fToan + fVan + fAnh;
}