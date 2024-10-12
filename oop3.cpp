#include <bits/stdc++.h>
using namespace std;

/*
    Goi ham rut gon phan so
    input: tuso, mauso
    output: khong co
*/
void rutgon(int &tuso, int &mauso) {
    int ucln = __gcd(tuso, mauso);
    tuso /= ucln;
    mauso /= ucln;
}

/*
    Goi ham nhap phan so
    input: tuso, mauso
    output: khong co
*/
void Nhap(int &tuso, int &mauso) {
    cout << "Nhap vao tu so: ";
    cin >> tuso;
    do {
        cout << "Nhap vao mau so (khac 0): ";
        cin >> mauso;
    }while(mauso == 0);

}

/*
    Goi ham cong phan so
    input: tuso1, mauso1, tuso2, mauso2
    output: tusocuoi, mausocuoi
*/
void CongPhanso(int tuso1, int mauso1, int tuso2, int mauso2, int &tusocuoi, int &mausocuoi) {
    tusocuoi = tuso1 * mauso2 + tuso2 * mauso1;
    mausocuoi = mauso1 * mauso2;
    rutgon(tusocuoi, mausocuoi);
    Xuat(tusocuoi, mausocuoi);
}

/*
    Goi ham tru phan so
    input: tuso1, mauso1, tuso2, mauso2
    output: tusocuoi, mausocuoi
*/
void TruPhanso(int tuso1, int mauso1, int tuso2, int mauso2, int &tusocuoi, int &mausocuoi) {
    tusocuoi = tuso1 * mauso2 - tuso2 * mauso1;
    mausocuoi = mauso1 * mauso2;
    rutgon(tusocuoi, mausocuoi);
    Xuat(tusocuoi, mausocuoi);
}

/*
    Goi ham nhan phan so
    input: tuso1, mauso1, tuso2, mauso2
    output: tusocuoi, mausocuoi
*/
void NhanPhanso(int tuso1, int mauso1, int tuso2, int mauso2, int &tusocuoi, int &mausocuoi) {
    tusocuoi = tuso1 * tuso2;
    mausocuoi = mauso1 * mauso2;
    rutgon(tusocuoi, mausocuoi);
    Xuat(tusocuoi, mausocuoi);
}

/*
    Goi ham chia phan so
    input: tuso1, mauso1, tuso2, mauso2
    output: tusocuoi, mausocuoi
*/
void ChiaPhanso(int tuso1, int mauso1, int tuso2, int mauso2, int &tusocuoi, int &mausocuoi) {
    if (tuso2 == 0) {
        cout << "Khong the chia cho 0" << endl;
        return;
    }
    tusocuoi = tuso1 * mauso2;
    mausocuoi = mauso1 * tuso2;
    rutgon(tusocuoi, mausocuoi);
    Xuat(tusocuoi, mausocuoi);

}

/*
    Goi ham xuat phan so
    input: tuso, mauso
    output: khong co
*/
void Xuat(int tuso, int mauso) {
    cout << tuso << "/" << mauso << endl;
}

int main() {
    int tuso1, mauso1, tuso2, mauso2;
    int tusocuoi, mausocuoi;
    
    cout<<"-----------------------" << endl;
    cout << "Nhap vao phan so 1: " << endl;
    Nhap(tuso1, mauso1);
    cout<<"-----------------------" << endl;
    cout << "Nhap vao phan so 2: " << endl;
    Nhap(tuso2, mauso2);
    cout<<"-----------------------" << endl;

    cout << "Tong: ";
    CongPhanso(tuso1, mauso1, tuso2, mauso2, tusocuoi, mausocuoi);
    cout<<"-----------------------" << endl;

    cout << "Hieu: ";
    TruPhanso(tuso1, mauso1, tuso2, mauso2, tusocuoi, mausocuoi);
    cout<<"-----------------------" << endl;

    cout << "Nhan: ";
    NhanPhanso(tuso1, mauso1, tuso2, mauso2, tusocuoi, mausocuoi);
    cout<<"-----------------------" << endl;

    cout << "Thuong: ";
    ChiaPhanso(tuso1, mauso1, tuso2, mauso2, tusocuoi, mausocuoi);
    return 0;
}