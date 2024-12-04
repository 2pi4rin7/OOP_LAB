#include "ban.h"
#include "banthan.h"
using namespace std;

BanThan::BanThan() : Ban(){
    phone = "";
}

BanThan::BanThan(string Name, int Ages, string Phone)
: Ban(Name, Ages)
{
    phone = Phone;
}

void BanThan::Nhap()
{
    cin>>name>>ages>>phone;
}

void BanThan::Xuat()
{
    Ban::Xuat();
    printf("so dien thoai: %s\n", phone.c_str());
}

float BanThan::ThoiGian(int n)
{
    return 5;
}
