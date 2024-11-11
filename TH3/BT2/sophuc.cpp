#include "sophuc.h"
using namespace std;
/*
Constructor không tham số của lớp SoPhuc.
*/
SoPhuc::SoPhuc(){
    thuc = 0;
    ao = 0;
}
/*
Constructor có tham số của lớp SoPhuc.
Input: double Thuc, double Ao
*/
SoPhuc::SoPhuc(double Thuc, double Ao = 0) : thuc(Thuc), ao(Ao) {}
/*
Phuong thuc cong hai so phuc.
Input: SoPhuc a, SoPhuc b
Output: SoPhuc
*/
SoPhuc operator+(SoPhuc a, SoPhuc b){
    return SoPhuc(a.thuc+b.thuc, a.ao+b.ao);
}
/*
Phuong thuc tru hai so phuc.
Input: SoPhuc a, SoPhuc b
Output: SoPhuc
*/
SoPhuc operator-(SoPhuc a, SoPhuc b){
    return SoPhuc(a.thuc-b.thuc, a.ao-b.ao);
}
/*
Phuong thuc nhan hai so phuc.
Input: SoPhuc a, SoPhuc b
Output: SoPhuc
*/
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
istream& operator>>(istream &is, SoPhuc &sp){
    is>>sp.thuc;
    if(is.peek() == '\n')
    {
        sp.ao = 0;
        return is;
    }
    is >> sp.ao;
    return is;
}
ostream& operator<<(ostream &os, SoPhuc sp)
{
    if(sp.ao == 0) os<<sp.thuc;
    else
    os<<sp.thuc<<((sp.ao < 0 ? "-" : "+"))<<abs(sp.ao)<<"i";
    return os;
}