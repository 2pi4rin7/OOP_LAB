#include "ban.h"
#include "bantrai.h"
using namespace std;

BanTrai::BanTrai() : Ban()
{
    income = 0;
}

BanTrai::BanTrai(string Name, int Ages, int Income)
:Ban(Name, Ages)
{
    income = Income;
}

void BanTrai::Nhap()
{
    cin>>name>>ages>>income;
}

void BanTrai::Xuat()
{
    Ban::Xuat();
    printf("thu nhap: %d\n", income);
}

float BanTrai::ThoiGian(int n)
{
    return 5*income/10000000.0;
}