#include <bits/stdc++.h>
using namespace std;

struct phanso{
    int tu, mau;
};

int main()
{
    int n;
    cin>>n;
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
    puts("Phan so nho nhat la:");
    cout<<a[0].tu<<'/'<<a[0].mau<<"\n";
    puts("Phan so lon nhat la:");
    cout<<a[n-1].tu<<'/'<<a[n-1].mau;
    return 0;
}