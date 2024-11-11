#include "ngaythangnam.h"
using namespace std;
int main()
{
    NgayThangNam ntn1, ntn2;
    cin>>ntn1>>ntn2;
    cout<<"Date1: "<<ntn1<<endl;
    cout<<"Date2: "<<ntn2<<endl;
    cout<<"Date1 + Date2: "<<ntn1 + ntn2<<endl;
    cout<<"Date1 - Date2: "<<ntn1 - ntn2<<endl;
    cout<<"Date1 + 5: "<<ntn1 + 5<<endl;
    cout<<"Date1 - 5: "<<ntn1 - 5<<endl;
    cout<<"Date1++: "<<ntn1++<<endl;
    cout<<"++Date1: "<<++ntn1<<endl;
    cout<<"Date2--: "<<ntn2--<<endl;
    cout<<"--Date2: "<<--ntn2<<endl;
    cout<<"Date1 == Date2: "<<(ntn1 == ntn2)<<endl;
    cout<<"Date1 != Date2: "<<(ntn1 != ntn2)<<endl;
    cout<<"Date1 >= Date2: "<<(ntn1 >= ntn2)<<endl;
    cout<<"Date1 <= Date2: "<<(ntn1 <= ntn2)<<endl;
    cout<<"Date1 > Date2: "<<(ntn1 > ntn2)<<endl;
    cout<<"Date1 < Date2: "<<(ntn1 < ntn2)<<endl;
    return 0;   
}