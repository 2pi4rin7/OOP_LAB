#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
int a[maxn], b[maxn], na, nb;
void nhap();
void Xuly();
int main()
{
    nhap();
    Xuly();
    return 0;
}

void nhap()
{
    cin >> na >> nb;
    for (int i = 0; i < na; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> b[i];
    }
}

void Xuly()
{
    int i = 0, j = 0;
    bool flag = 0;
    vector<int> res;
    for (int i = 0; i < nb; i++)
    {
        if(b[i] == a[0])
        {
            while(b[i] == a[j] && j < na)
            {
                i++;
                j++;
            }
            i --;
            if(j == na)
            {
                res.push_back(i - na + 1);
                j = 0;
            }
            j = 0;
        }
    }
    cout<<res.size()<<endl;
    for (auto i:res)
        cout<<i<<" ";
}