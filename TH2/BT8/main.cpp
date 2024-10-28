#include <bits/stdc++.h>
using namespace std;

list<double> a;
int n;

int main()
{
    while(cin>>n)
    {
        if(n == -1)
            break;
        if(n == 0)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        if(n == 1)
        {
            int x;
            cin>>x;
            a.push_back(x);
            a.pop_front();
        }
        if(n == 2)
        {
            int x;
            cin>>x;
            a.pop(x);
        }
        
    }
    return 0;
}