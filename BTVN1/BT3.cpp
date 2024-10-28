#include <bits/stdc++.h>
using namespace std;
int n, dd[100];
struct phanso{
    int tu, mau;
};
phanso arr[100], muctieu;
phanso tich(phanso a, phanso b)
{
    phanso c;
    c.tu = a.tu*b.tu;
    c.mau = a.mau*b.mau;
    return c;
}

void find(phanso a, int i, int dd[])
{
    if(a.tu*muctieu.mau == a.mau*muctieu.tu)
    {
        for (int j = 0; j < n; j++)
        {
            if(dd[j] == 1)
            cout<<arr[j].tu<<'/'<<arr[j].mau<<' ';
        }
        exit(0);
    }
    if(i >= n)
        return;
    for (int j=i; j<n; j++)
    {
        if(dd[j] == 0)
        {
            dd[j] = 1;
            find(tich(a, arr[j]), i+1, dd);
            dd[j] = 0;
        }
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i].tu>>arr[i].mau;
        while(arr[i].mau == 0)
        {
            puts("Mau so khong hop le!");
            cin>>arr[i].mau;
        }
    }
    sort(arr, arr+n, [](phanso x, phanso y){
        return x.tu*y.mau < y.tu*x.mau;
    });
    cin>>muctieu.tu>>muctieu.mau;
    phanso a = {1, 1};
    find(a, 0, dd);
    return 0;
}