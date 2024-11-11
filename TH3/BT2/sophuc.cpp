#include "sophuc.h"
using namespace std;
/*
Constructor khong tham so cua lop SoPhuc.
*/
SoPhuc::SoPhuc(){
    thuc = 0;
    ao = 0;
}
/*
Constructor co tham so cua lop SoPhuc.
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
/*
Phuong thuc chia hai so phuc.
Input: SoPhuc a, SoPhuc b
Output: SoPhuc
*/
SoPhuc operator/(SoPhuc a, SoPhuc b){
    return SoPhuc((a.thuc*b.thuc+a.ao*b.ao)/(b.thuc*b.thuc+b.ao*b.ao), (a.ao*b.thuc-a.thuc*b.ao)/(b.thuc*b.thuc+b.ao*b.ao));
}
/*
Phuong thuc so sanh bang giua hai so phuc.
Input: SoPhuc a, SoPhuc b
Output: boolen
*/
bool SoPhuc::operator==(SoPhuc sp){
    return thuc==sp.thuc && ao==sp.ao;
}
/*
Phuong thuc so sanh khac giua hai so phuc.
Input: SoPhuc a, SoPhuc b
Output: boolen
*/
bool SoPhuc::operator!=(SoPhuc sp){
    return !(*this==sp);
}
/*
Phuong thuc nhap du lieu cho so phuc.
*/
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
/*
Phuong thuc xuat du lieu cho so phuc.
*/
ostream& operator<<(ostream &os, SoPhuc sp)
{
    if(sp.ao == 0) os<<sp.thuc;
    else
    os<<sp.thuc<<((sp.ao < 0 ? "-" : "+"))<<abs(sp.ao)<<"i";
    return os;
}