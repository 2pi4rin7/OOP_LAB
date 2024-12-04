#include <iostream>
#include "giasuc.h"
#include "cow.h"
#include "sheep.h"
#include "goat.h"
using namespace std;


int main()
{
    GiaSuc *giaSuc[3];
    int n;
    cout<<"Moi ban nhap so luong bo: "<<endl;
    cin>>n;
    giaSuc[0] = new Cow(n, 0, 0);
    cout<<"Moi ban nhap so luong cuu: "<<endl;
    cin>>n;
    giaSuc[1] = new Sheep(n, 0, 0);
    cout<<"Moi ban nhap so luong de: "<<endl;
    cin>>n;
    giaSuc[2] = new Goat(n, 0, 0);
    cout<<"a) Nhung tieng keu nghe duoc trong nong trai: "<<endl;
    cout<<"1. "<<giaSuc[0]->GetSound()<<endl;
    cout<<"2. "<<giaSuc[1]->GetSound()<<endl;
    cout<<"3. "<<giaSuc[2]->GetSound()<<endl;
    cout<<"b) So luong gia suc va sua moi loai:"<<endl;
    int updatetime = 1;
    while(updatetime --)
    {
        giaSuc[0]->update();
        giaSuc[1]->update();
        giaSuc[2]->update();
        cout<<"1. Bo: "<<giaSuc[0]->getQuantitySpecies()<<" | "<<giaSuc[0]->getMilk()<<endl;
        cout<<"2. Cuu: "<<giaSuc[1]->getQuantitySpecies()<<" | "<<giaSuc[1]->getMilk()<<endl;
        cout<<"3. De: "<<giaSuc[2]->getQuantitySpecies()<<" | "<<giaSuc[2]->getMilk()<<endl;

    }
    return 0;
}