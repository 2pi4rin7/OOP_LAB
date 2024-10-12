#include <bits/stdc++.h>
using namespace std;

int tuso, mauso; 

/*
    Goi ham rut gon phan so
    input: 2 so nguyen a, b
*/
void rutgon(int &a, int &b)
{
    int ucln = __gcd(a, b);
    a /= ucln; 
    b /= ucln;
}

int main()
{
    cout << "Nhap tu so: ";
    cin >> tuso;
    cout << "Nhap mau so: ";
    cin >> mauso;
    rutgon(tuso, mauso);
    cout << "Phan so sau khi rut gon: " << tuso << "/" << mauso << endl;
    return 0;
}