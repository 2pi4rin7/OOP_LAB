#include "thisinh.h"
#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;
    ThiSinh *arr = new ThiSinh[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nhap thi sinh thu " << i + 1 << endl;
        arr[i].Nhap();
    }
    ThiSinh temp;
    int maxsum = 0;
    for (int i=0; i < n; i++)
    {
        if(arr[i].Tong() > 15)
            arr[i].Xuat();
        if(arr[i].Tong() > maxsum)
        {
            maxsum = arr[i].Tong();
            temp = arr[i];
        }
    }
    cout << "Thi sinh co tong diem cao nhat la: " << endl;
    temp.Xuat();
    return 0;
}