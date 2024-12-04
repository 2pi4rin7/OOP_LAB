#include "ban.h"
using namespace std;

Ban::Ban()
{
    name = "";
    ages = 0;
}

Ban::Ban(string name, int ages)
{
    this->name = name;
    this->ages = ages;
}

void Ban::Xuat()
{
    printf("Ten: %s, tuoi: %d, ", name.c_str(), ages);
}