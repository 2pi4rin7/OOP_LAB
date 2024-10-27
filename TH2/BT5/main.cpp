#include "diem.cpp"
#include <bits/stdc++.h>
using namespace std;


void menu(){
    puts("1. Nhan doi tung do va hoanh do");
    puts("2. Gan diem ve goc toa do");
    puts("3. Tinh tien");
    puts("Nhap x: ");
}

int main()
{
    Diem a;
    puts("Nhap diem a:");
    a.Nhap();
    int n;
    puts("Nhap n: so luong chi thi");
    cin >> n;
    while(n--)
    {
        menu();
        int choice;
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                a.PhongTo(2);
                a.Xuat();
                break;
            }
            case 2:
            {
                a.SetTungDo(0);
                a.SetHoangDo(0);
                a.Xuat();
                break;
            }
            case 3:
            {
                int k;
                puts("Nhap k: ");
                cin>>k;
                int d;
                puts("Nhap do doi d: ");
                cin>>d;
                if (k == 0)
                    a.TinhTien(d, 0);
                else a.TinhTien(0, d);
                a.Xuat();
                break;
            }
        }
    }
    return 0;
}