#include "phanso.h"
using namespace std;

PhanSo::PhanSo() {
    tu = 0;
    mau = 1;
}
PhanSo::PhanSo(int Tu, int Mau) : tu(Tu), mau(Mau) {}
PhanSo::PhanSo(int Tu) : tu(Tu) {}
PhanSo PhanSo::operator+(PhanSo ps)
{
    return PhanSo(tu*ps.mau + ps.tu*mau, mau*ps.mau);
}
PhanSo operator+(int a, PhanSo ps)
{
    return PhanSo(a*ps.mau + ps.tu, ps.mau);
}
PhanSo PhanSo::operator-(PhanSo ps)
{
    return PhanSo(tu*ps.mau - ps.tu*mau, mau*ps.mau);
}
PhanSo operator-(int a, PhanSo ps)
{
    return PhanSo(a*ps.mau - ps.tu, ps.mau);
}
PhanSo PhanSo::operator*(PhanSo ps)
{
    return PhanSo(tu*ps.tu, mau*ps.mau);
}
PhanSo operator*(int a, PhanSo ps)
{
    return PhanSo(a*ps.tu, ps.mau);
}
PhanSo PhanSo::operator/(PhanSo ps)
{
    return PhanSo(tu*ps.mau, mau*ps.tu);
}
PhanSo operator/(int a, PhanSo ps)
{
    return PhanSo(a*ps.mau, ps.tu);
}
bool PhanSo::operator==(PhanSo ps)
{
    return tu*ps.mau == ps.tu*mau;
}
bool PhanSo::operator!=(PhanSo ps)
{
    return tu*ps.mau != ps.tu*mau;
}
bool PhanSo::operator>=(PhanSo ps)
{
    return tu*ps.mau >= ps.tu*mau;
}
bool PhanSo::operator<=(PhanSo ps)
{
    return tu*ps.mau <= ps.tu*mau;
}
bool PhanSo::operator>(PhanSo ps)
{
    return tu*ps.mau > ps.tu*mau;
}
bool PhanSo::operator<(PhanSo ps)
{
    return tu*ps.mau < ps.tu*mau;
}
istream& operator>>(istream &is, PhanSo ps)
{
    is >> ps.tu;
    is >> ps.mau;
    return is;
}
ostream& operator<<(ostream &os, PhanSo ps)
{
    os << ps.tu << "/" << ps.mau;
    return os;
}