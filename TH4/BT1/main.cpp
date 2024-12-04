#include "nhanvien.h"
#include "quanly.h"
#include "kysu.h"

int main()
{
    int n;
    cout<<"Nhap so luong nhan vien: ";
    cin>>n;
    NhanVien *nv[n];
    for (int i=0; i<n; i++)
    {
        int loainv;
        cout<<"1 - QuanLy, 2 - KySu: ";
        cin>>loainv;
        if (loainv == 1)
        {
            nv[i] = new QuanLy();
        }
        else nv[i] = new KySu();
        nv[i]->Nhap();
    }

    for (int i=0; i<n; i++)
    {
        nv[i]->Xuat();
    }

    return 0;
}