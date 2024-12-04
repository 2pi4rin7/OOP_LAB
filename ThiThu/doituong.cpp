#include <bits/stdc++.h>
#include "ban.h"
#include "banthan.h"
#include "bantrai.h"
#include "bantraikhac.h"
#include "doituong.h"
using namespace std;

void DoiTuong::Nhap()
{
    cin>>n;
    ban = new Ban*[n];
    for (int i = 0; i<n; i++)
    {
        int type;
        cin>>type;
        if(type == 1)
            ban[i] = new BanThan();
        else if(type == 2)
            ban[i] = new BanTrai();
        else
            ban[i] = new BanTraiKhac();
        ban[i]->Nhap();
    }
}

void DoiTuong::Xuat()
{
    float loai1, loai2, loai3;
    loai1 = loai2 = loai3 = 0.0;
    for (int i=0; i<n; i++)
    {
        if(dynamic_cast<BanThan*>(ban[i]) != NULL)
            loai1 += ban[i]->ThoiGian(n);
        else if(dynamic_cast<BanTrai*>(ban[i]) != NULL)
            loai2 += ban[i]->ThoiGian(n);
        else
            loai3 += ban[i]->ThoiGian(n);
    }
    puts("Thong ke:");
    cout<<"\t - Thoi gian cho ban than: "<<loai1<<" h"<<endl;
    cout<<"\t - Thoi gian cho ban trai: "<<loai2<<" h"<<endl;
    cout<<"\t - Thoi gian cho ban trai khac: "<<loai3<<" h"<<endl;

    float maxtg = 0.0;
    for (int i = 0; i < n; i++)
        maxtg = max(maxtg, ban[i]->ThoiGian(n));
    printf("\nNguoi ban quan trong nhat:\n");
    for(int i=0; i<n; i++)
    {
        if(ban[i]->ThoiGian(n) == maxtg)
            ban[i]->Xuat();
    }

}

