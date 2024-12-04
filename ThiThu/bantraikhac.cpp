#include "ban.h"
#include "bantraikhac.h"

BanTraiKhac::BanTraiKhac() : Ban()
{
    attractiveness = 0;
}

BanTraiKhac::BanTraiKhac(string Name, int Ages, float Attractiveness)
:Ban(Name, Ages)
{
    attractiveness = Attractiveness;
}

void BanTraiKhac::Nhap()
{
    cin>>name>>ages>>attractiveness;
}

void BanTraiKhac::Xuat()
{
    Ban::Xuat();
    string level = "";
    if(attractiveness >= 0.7)
        level = "cao";
    else if(attractiveness >= 0.4)
        level = "trung binh";
    else
        level = "thap";
    printf("do thu hut: %s\n", level.c_str());
}


float BanTraiKhac::ThoiGian(int n)
{
    return attractiveness*20/n;
}