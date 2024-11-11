#include "sophuc.h"
using namespace std;

SoPhuc::SoPhuc(){
    thuc = 0;
    ao = 0;
}
SoPhuc::SoPhuc(double Thuc, double Ao = 0) : thuc(Thuc), ao(Ao) {}
SoPhuc operator+(SoPhuc a, SoPhuc b){
    return SoPhuc(a.thuc+b.thuc, a.ao+b.ao);
}
SoPhuc operator-(SoPhuc a, SoPhuc b){
    return SoPhuc(a.thuc-b.thuc, a.ao-b.ao);
}
SoPhuc operator*(SoPhuc a, SoPhuc b){
    return SoPhuc(a.thuc*b.thuc-a.ao*b.ao, a.thuc*b.ao+a.ao*b.thuc);
}
SoPhuc operator/(SoPhuc a, SoPhuc b){
    return SoPhuc((a.thuc*b.thuc+a.ao*b.ao)/(b.thuc*b.thuc+b.ao*b.ao), (a.ao*b.thuc-a.thuc*b.ao)/(b.thuc*b.thuc+b.ao*b.ao));
}
bool SoPhuc::operator==(SoPhuc sp){
    return thuc==sp.thuc && ao==sp.ao;
}
bool SoPhuc::operator!=(SoPhuc sp){
    return !(*this==sp);
}
istream& operator>>(istream &is, SoPhuc sp){
    is>>sp.thuc>>sp.ao;
    return is;
}
ostream& operator<<(ostream &os, SoPhuc sp)
{
    os<<sp.thuc<<((sp.ao < 0 ? "-" : "+"))<<sp.ao<<"i";
    return os;
}