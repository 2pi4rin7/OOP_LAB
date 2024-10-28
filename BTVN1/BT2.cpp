#include <bits/stdc++.h>
using namespace std;

struct phanso{
    int tu, mau;
};

int main()
{
    int n, k;
    cin >> n >> k;
    phanso *a = new phanso[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i].tu>>a[i].mau;
        while(a[i].mau == 0)
        {
            puts("Mau so khong hop le!");
            cin>>a[i].mau;
        }
    }
    sort(a, a+n, [](phanso x, phanso y){
        return x.tu*y.mau < y.tu*x.mau;
    });
    if (k < n){
        cout << "Phan so nho thu " << k << ": " << a[k-1].tu << "/" << a[k-1].mau << endl;
        cout << "Phan so lon thu " << k << ": " << a[n-k].tu << "/" << a[n-k].mau << endl;
    }
    delete[] a;
    return 0;
}