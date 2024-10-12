#include <bits/stdc++.h>
using namespace std;
int NgaykoNhuan[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int NgayNhuan[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int TongkoNhuan[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
int TongNhuan[] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};

int ngay, thang, nam;

/*
    Tim ngay ke tiep
    input: ngay, thang, nam
    output: khong co
*/
void ngayketiep(int ngay, int thang, int nam)
{
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
    {
        if (ngay < NgayNhuan[thang])
        {
            ngay++;
        }
        else if (thang < 12)
        {
            ngay = 1;
            thang++;
        }
        else
        {
            ngay = 1;
            thang = 1;
            nam++;
        }
    }
    else 
    {
        if (ngay < NgaykoNhuan[thang])
        {
            ngay++;
        }
        else if (thang < 12)
        {
            ngay = 1;
            thang++;
        }
        else
        {
            ngay = 1;
            thang = 1;
            nam++;
        }
    }
    cout<<"Ngay ke tiep: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
}

/*
    Tim ngay truoc do
    input: ngay, thang, nam
    output: khong co
*/
void ngaytruoc(int ngay, int thang, int nam)
{
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
    {
        if (ngay > 1)
        {
            ngay--;
        }
        else if (thang > 1)
        {
            thang--;
            ngay = NgayNhuan[thang];
        }
        else
        {
            thang = 12;
            ngay = NgayNhuan[thang];
            nam--;
        }
    }
    else 
    {
        if (ngay > 1)
        {
            ngay--;
        }
        else if (thang > 1)
        {
            thang--;
            ngay = NgaykoNhuan[thang];
        }
        else
        {
            thang = 12;
            ngay = NgaykoNhuan[thang];
            nam--;
        }
    }
    cout<<"Ngay truoc do: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
}

/*
    Tim so ngay thu may trong nam
    input: ngay, thang, nam
    output: khong co
*/
void ngaytrongnam(int ngay, int thang, int nam)
{
    int ngaytrongnam;
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
    {
        ngaytrongnam = TongNhuan[thang - 1] + ngay;
    }
    else
    {
        ngaytrongnam = TongkoNhuan[thang - 1] + ngay;
    }
    cout<<"Ngay trong nam: "<<ngaytrongnam<<endl;
}

bool checkday(int ngay, int thang, int nam)
{
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
    {
        if (ngay > 0 && ngay <= NgayNhuan[thang] && thang > 0 && thang <= 12)
        {
            return true;
        } 
    }
    else
    {
        if (ngay > 0 && ngay <= NgaykoNhuan[thang] && thang > 0 && thang <= 12)
        {
            return true;
        }
    }
    return false;
}

int main()  
{
    do{
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    if(checkday(ngay, thang, nam) == false)
    {
        cout<<"Ngay thang nam khong hop le. Vui long nhap lai!"<<endl;
    }
    }while(checkday(ngay, thang, nam) == false);
    ngayketiep(ngay, thang, nam);
    ngaytruoc(ngay, thang, nam);
    ngaytrongnam(ngay, thang, nam);
    return 0;
}