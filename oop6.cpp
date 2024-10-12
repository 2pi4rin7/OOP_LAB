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

/*
    Tìm vị trí xuất hiện a trong b
    input: khong co
    output: khong co
    Thuật toán: Khi duyệt qua mảng B nếu phần từ nào mảng B \\
    bằng phần tử đầu tiên của mảng A thì biến đếm mảng A tăng lên \\
    nếu như biến đếm mảng A bằng độ dài mảng A thì mảng A xuât hiện trong mảng B \\
    Cứ như thế duyệt qua hết mảng B
*/
void Xuly()
{
    int i = 0, j = 0;
    bool flag = 0;
    vector<int> res;
    for (int i = 0; i < nb; i++)
    {
        if(b[i] == a[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }   
        if(j == na)
        {
            res.push_back(i - na + 1);
        }
    }
    cout<<res.size()<<endl;
    for (auto i:res)
        cout<<i<<" ";
}