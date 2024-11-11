#include "ngaythangnam.h"

NgayThangNam::NgayThangNam(){
    Ngay = 1;
    Thang = 1;
    Nam = 1970;
}

NgayThangNam::NgayThangNam(int ngay, int thang, int nam){
    Ngay = ngay;
    Thang = thang;
    Nam = nam;
}

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

//convert Day to Date;

NgayThangNam NgayThangNam::ConverttoDate(int Day){
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

NgayThangNam NgayThangNam::operator+(int Ngay){
    int SoNgay = TinhNgay() + Ngay;
    return ConverttoDate(SoNgay);
}

NgayThangNam NgayThangNam::operator-(int Ngay){
    int SoNgay = TinhNgay() - Ngay;
    return ConverttoDate(SoNgay);
}
// Co loi o day
NgayThangNam NgayThangNam::operator+(NgayThangNam ntn){
    int SoNgay = TinhNgay() + ntn.TinhNgay();
    return ConverttoDate(SoNgay);
}
// Co loi o day
NgayThangNam NgayThangNam::operator-(NgayThangNam ntn){
    int SoNgay = TinhNgay() - ntn.TinhNgay();
    return ConverttoDate(SoNgay);
}

NgayThangNam NgayThangNam::operator++(){
    return *this = ConverttoDate(this->TinhNgay() + 1);
}

NgayThangNam NgayThangNam::operator++(int){
    NgayThangNam tmp = *this;
    *this = ConverttoDate(this->TinhNgay() + 1);
    return tmp;
}

NgayThangNam NgayThangNam::operator--(){
    return *this = ConverttoDate(this->TinhNgay() - 1);
}

NgayThangNam NgayThangNam::operator--(int){
    NgayThangNam tmp = *this;
    *this = ConverttoDate(this->TinhNgay() - 1);
    return tmp;
}

bool NgayThangNam::operator==(NgayThangNam ntn){
    return this->TinhNgay() == ntn.TinhNgay();
}

bool NgayThangNam::operator!=(NgayThangNam ntn){
    return this->TinhNgay() != ntn.TinhNgay();
}

bool NgayThangNam::operator>=(NgayThangNam ntn){
    return this->TinhNgay() >= ntn.TinhNgay();
}

bool NgayThangNam::operator<=(NgayThangNam ntn){
    return this->TinhNgay() <= ntn.TinhNgay();
}

bool NgayThangNam::operator>(NgayThangNam ntn){
    return this->TinhNgay() > ntn.TinhNgay();
}

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
