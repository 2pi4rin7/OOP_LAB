#include <bits/stdc++.h>
using namespace std;

int tuso1, mauso1; 
int tuso2, mauso2;

/*
    Goi ham timphansolonnhat()
    input: khong co
    output: khong co
*/
void timphansolonnhat()
{
    if (tuso1 * mauso2 > tuso2 * mauso1)
    {
        cout << "Phan so 1 lon hon phan so 2" << endl;
    }
    else if (tuso1 * mauso2 < tuso2 * mauso1)
    {
        cout << "Phan so 2 lon hon phan so 1" << endl;
    }
    else
    {
        cout << "Hai phan so bang nhau" << endl;
    }
}


int main()
{

    cout << "Nhap tu so 1: ";
    cin >> tuso1;
    cout <<"Nhap mau so 1: ";
    cin >> mauso1;
    cout << "Nhap tu so 2: ";
    cin >> tuso2;
    cout <<"Nhap mau so 2: ";
    cin >> mauso2;
    timphansolonnhat();
    return 0;
}