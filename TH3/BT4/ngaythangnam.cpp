#include "ngaythangnam.h"
/*
Constuctor mac dinh cua NgayThangNam
*/
NgayThangNam::NgayThangNam(){
    Ngay = 1;
    Thang = 1;
    Nam = 1970;
}
/*
Constructor co tham so cua NgayThangNam
*/
NgayThangNam::NgayThangNam(int ngay, int thang, int nam){
    Ngay = ngay;
    Thang = thang;
    Nam = nam;
}
/*
Phuong thuc chuyen ngay thang nam thanh so ngay ke tu 1/1/1900
Input: Ngay, Thang, Nam
Output: So ngay ke tu 1/1/1900
*/
int NgayThangNam::TinhNgay(){
    int NgayTrongThang[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int SoNgay = 0;
    for (int i = Nam - 1; i >= 1900; i--){
        if (i % 4 && i % 100 != 0 || i % 400 == 0){
            SoNgay += 366;
        } else {
            SoNgay += 365;
        }
    }
    for (int i = 0; i < Thang - 1; i++){
        SoNgay += NgayTrongThang[i];
        if(i == 1){
            if (Nam % 4 && Nam % 100 != 0 || Nam % 400 == 0){
                SoNgay ++;
            } 
        }
    }
    SoNgay += Ngay;
    return SoNgay;
}
/*
Ham de chuyen doi so ngay ke tu 1/1/1900 thanh ngay thang nam
Input: int Day 
Output: NgayThangNam
*/
NgayThangNam ConverttoDate(int Day){
    int ThangTrongNam[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int Nam = 1900;
    int Thang = 0;
    while (1){
        if (Day <= 365){
            break;
        }
        if (Nam % 4 && Nam % 100 != 0 || Nam % 400 == 0){
            Day -= 366;
        } else {
            Day -= 365;
        }
        Nam++;
    }
    while(1){
        if (Thang == 1){
            if (Nam % 4 && Nam % 100 != 0 || Nam % 400 == 0){
                if (Day <= 29){
                    break;
                }
                Day -= 29;
            } else {
                if (Day <= 28){
                    break;
                }
                Day -= 28;
            }
        } else {
            if (Day <= ThangTrongNam[Thang]){
                break;
            }
            Day -= ThangTrongNam[Thang];
        }
        Thang++;
    }
    return NgayThangNam(Day, Thang + 1, Nam);
}
/*
Phuong thuc cong so nguyen vao ngay thang nam
Input: int Ngay
Output: NgayThangNam
*/
NgayThangNam NgayThangNam::operator+(int Ngay){
    int SoNgay = TinhNgay() + Ngay;
    return ConverttoDate(SoNgay);
}

/*
Phuong thuc tru so nguyen vao ngay thang nam
Input: int Ngay
Output: NgayThangNam hoac string("ERROR!!")
*/
std::variant<NgayThangNam, std::string> NgayThangNam::operator-(int Ngay){
    int SoNgay = TinhNgay() - Ngay;
    return ConverttoDate(SoNgay);
}
/*
Phuong thuc cong 2 ngay thang nam
Input: NgayThangNam ntn
Output: NgayThangNam
*/
NgayThangNam NgayThangNam::operator+(NgayThangNam ntn){
    int SoNgay = TinhNgay() + ntn.TinhNgay();
    return ConverttoDate(SoNgay);
}
/*
Phuong thuc tru 2 ngay thang nam
Input: NgayThangNam ntn
Output: NgayThangNam hoac string("ERROR!!")
*/
std::variant<NgayThangNam, std::string> NgayThangNam::operator-(NgayThangNam ntn){
    int SoNgay = TinhNgay() - ntn.TinhNgay();
    if(SoNgay < 0)
        return "ERROR!!";
    return ConverttoDate(SoNgay);
}
/*
Phuong thuc tang ngay thang nam len 1 ngay
Output: NgayThangNam
*/
NgayThangNam NgayThangNam::operator++(){
    return *this = ConverttoDate(this->TinhNgay() + 1);
}
/*
Phuong thuc tang ngay thang nam len 1 ngay
Output: NgayThangNam
*/
NgayThangNam NgayThangNam::operator++(int){
    NgayThangNam tmp = *this;
    *this = ConverttoDate(this->TinhNgay() + 1);
    return tmp;
}
/*
Phuong thuc giam ngay thang nam di 1 ngay
Output: NgayThangNam hoac string("ERROR!!")
*/
std::variant<NgayThangNam, std::string> NgayThangNam::operator--(){
    int Day = this->TinhNgay() - 1;
    if(Day < 0)
        return "ERROR!!";
    return *this = ConverttoDate(this->TinhNgay() - 1);
}
/*
Phuong thuc giam ngay thang nam di 1 ngay
Output: NgayThangNam hoac string("ERROR!!")
*/
std::variant<NgayThangNam, std::string> NgayThangNam::operator--(int){
    NgayThangNam tmp = *this;
    if(this->TinhNgay() - 1 < 0)
        return "ERROR!!";
    *this = ConverttoDate(this->TinhNgay() - 1);
    return tmp;
}
/*
Phuong thuc so sanh 2 ngay thang nam
Input: NgayThangNam ntn
Output: bool
*/
bool NgayThangNam::operator==(NgayThangNam ntn){
    return this->TinhNgay() == ntn.TinhNgay();
}
/*
Phong thuc so sanh 2 ngay thang nam
Input: NgayThangNam ntn
Output: bool
*/
bool NgayThangNam::operator!=(NgayThangNam ntn){
    return this->TinhNgay() != ntn.TinhNgay();
}
/*
Phuong thuc so sanh lon hon hoac bang 2 ngay thang nam
Input: NgayThangNam ntn
Output: bool
*/
bool NgayThangNam::operator>=(NgayThangNam ntn){
    return this->TinhNgay() >= ntn.TinhNgay();
}
/*
Phuong thuc so sanh nho hon hoac bang 2 ngay thang nam
Input: NgayThangNam ntn
Output: bool
*/
bool NgayThangNam::operator<=(NgayThangNam ntn){
    return this->TinhNgay() <= ntn.TinhNgay();
}
/*
Phuong thuc so sanh lon hon 2 ngay thang nam
Input: NgayThangNam ntn
Output: bool
*/
bool NgayThangNam::operator>(NgayThangNam ntn){
    return this->TinhNgay() > ntn.TinhNgay();
}
/*
Phuong thuc so sanh nho hon 2 ngay thang nam
Input: NgayThangNam ntn
Output: bool
*/
bool NgayThangNam::operator<(NgayThangNam ntn){
    return this->TinhNgay() < ntn.TinhNgay();
}

std::istream& operator>>(std::istream &is, NgayThangNam &ntn){
    is >> ntn.Ngay >> ntn.Thang >> ntn.Nam;
    return is;
}

std::ostream& operator<<(std::ostream &os, NgayThangNam ntn){
    os << ntn.Ngay << "/" << ntn.Thang << "/" << ntn.Nam;
    return os;
}   

std::ostream& operator<<(std::ostream &os, std::variant<NgayThangNam, std::string> ntn){
    if (std::holds_alternative<NgayThangNam>(ntn)){
        os << std::get<NgayThangNam>(ntn);
    } else {
        os << std::get<std::string>(ntn);
    }
    return os;
}