#include <iostream>
using namespace std;
class Array{

    int n;
public:
    Array()
    {
        n = 0;
    }
    Array(int n)
    {
        // ...
    }
    // ...
    int A[100];
};
int main()
{
    Array M1;
    Array M2(5);
    cout<<M2.A[0];
    return 0;
}