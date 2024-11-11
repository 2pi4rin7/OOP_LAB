#include "phanso.h"
using namespace std;
PhanSo::PhanSo() : tu(0), mau(1) {}
PhanSo::PhanSo(double Tu, double Mau = 1) : tu(Tu), mau(Mau) {}
/*
Hàm này thực hiện phép cộng giữa hai phân số. 
Nếu một trong hai mẫu là 1 (mẫu đơn giản), nó sẽ thực hiện phép cộng bằng cách chuyển phân số thành dạng số thực và trả về kết quả.
*/
const variant<PhanSo, double> operator+(PhanSo a, PhanSo b) {
    if (a.mau == 1 || b.mau == 1) {
        return double(a.tu) / a.mau + double(b.tu) / b.mau;
    }
    return PhanSo(a.tu * b.mau + b.tu * a.mau, a.mau * b.mau);
}
/*
Hàm này thực hiện phép trừ giữa hai phân số. 
Nếu một trong hai mẫu là 1 (mẫu đơn giản), nó sẽ thực hiện phép trừ bằng cách chuyển phân số thành dạng số thực và trả về kết quả.
*/
const variant<PhanSo, double> operator-(PhanSo a, PhanSo b) {
    if(a.mau == 1 || b.mau == 1) {
        return double(a.tu) / a.mau - double(b.tu) / b.mau;
    }
    return PhanSo(a.tu * b.mau - b.tu * a.mau, a.mau * b.mau);
}
/*
Hàm này thực hiện phép nhân giữa hai phân số. 
Nếu một trong hai mẫu là 1 (mẫu đơn giản), nó sẽ thực hiện phép nhân bằng cách chuyển phân số thành dạng số thực và trả về kết quả.
*/
const variant<PhanSo, double> operator*(PhanSo a, PhanSo b) {
    if(a.mau == 1 || b.mau == 1) {
        return double(a.tu) / a.mau * double(b.tu) / b.mau;
    }
    return PhanSo(a.tu * b.tu, a.mau * b.mau);
}
/*
Hàm này thực hiện phép chia giữa hai phân số. 
Nếu một trong hai mẫu là 1 (mẫu đơn giản), nó sẽ thực hiện phép chia bằng cách chuyển phân số thành dạng số thực và trả về kết quả.
*/
const variant<PhanSo, double> operator/(PhanSo a, PhanSo b) {
    if (b.tu == 0) {
        cerr << "Loi! Khong the chia cho 0" << endl;
        exit(1);
    }
    if(a.mau == 1 || b.mau == 1) {
        return (double(a.tu) / a.mau) / (double(b.tu) / b.mau);
    }
    return PhanSo(a.tu * b.mau, a.mau * b.tu);
}
/*
Phương thức so sánh bằng giữa hai phân số.
*/
bool PhanSo::operator==(PhanSo ps) {
    return tu * ps.mau == ps.tu * mau;
}
/*
Phương thức so sánh khác giữa hai phân số.
Input: PhanSo ps
Output: boolen
*/
bool PhanSo::operator!=(PhanSo ps) {
    return tu * ps.mau != ps.tu * mau;
}
/*
Phương thức so sánh lớn hoặc bằng giữa hai phân số.
Input: PhanSo ps
Output: boolen
*/
bool PhanSo::operator>=(PhanSo ps) {
    return tu * ps.mau >= ps.tu * mau;
}
/*
Phương thức so sánh bé hơn hoặc bằng giữa hai phân số.
Input: PhanSo ps
Output: boolen
*/
bool PhanSo::operator<=(PhanSo ps) {
    return tu * ps.mau <= ps.tu * mau;
}
/*
Phương thức so sánh lớn hơn giữa hai phân số.
Input: PhanSo ps
Output: boolen
*/
bool PhanSo::operator>(PhanSo ps) {
    return tu * ps.mau > ps.tu * mau;
}
/*
Phuong thuc so sanh be hon giua hai phan so.
Input: PhanSo ps
Output: boolen
*/
bool PhanSo::operator<(PhanSo ps) {
    return tu * ps.mau < ps.tu * mau;
}
/*
Phương thức nhập dữ liệu cho phân số.
Input: istream &is, PhanSo &ps
Output: istream
*/
istream& operator>>(istream &is, PhanSo &ps) {
    is >> ps.tu;
    if(is.peek() == '\n')
    {
        ps.mau = 1;
        return is;
    }
    is >> ps.mau;
    if (ps.mau == 0) {
        cerr << "Loi! Mau so khong the bang 0" << endl;
        exit(1);
    }
    return is;
}
/*
Phương thức xuất dữ liệu cho phân số.
Input: ostream &os, const variant<PhanSo, double> &ps
Output: ostream
*/
ostream& operator<<(ostream &os, const variant<PhanSo, double> &ps) {
    if (holds_alternative<PhanSo>(ps)) {
        PhanSo ps1 = get<PhanSo>(ps);
        if(ps1.tu == 0)
        {
            os << 0;
            return os;
        } 
        os << ps1.tu << "/" << ps1.mau;
    } else {
        os << get<double>(ps);
    }
    return os;
}