#include <bits/stdc++.h>
using namespace std;

struct hocsinh{
    // khai bao ten tuoi diem toan diem van diem ngoai ngu
    string hoten, ten;
    int tuoi;
    float toan, van, ngoaingu, diemtb;
};
int n;
hocsinh hs[100];
void nhap();
void xuat();
bool check(hocsinh a);
bool check(int tuoi);
bool check(float diem);
float diemtb(hocsinh a);
string phanloai(hocsinh a);
void thongtin(hocsinh a);
string splitten(string s);
int main()
{
    nhap();
    xuat();
    return 0;
}

void nhap()
{
    puts("-----------------------------");
    cout<<"Nhap so luong hoc sinh: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        puts("-----------------------------");
        cout<<"Nhap thong tin hoc sinh thu "<<i+1<<": "<<endl;
        cin.ignore();
        do{
            cout<<"Nhap ho va ten: ";
            getline(cin, hs[i].hoten);
            if(check(hs[i]) == false)
            {
                cout<<"Ten khong hop le. Vui long nhap lai!"<<endl;
            }
        }while(check(hs[i]) == false);
        do{
            cout<<"Nhap tuoi: ";
            cin >> hs[i].tuoi;
            if(check(hs[i].tuoi) == false)
            {
                cout<<"Tuoi khong hop le. Vui long nhap lai!"<<endl;
            }
        }while(check(hs[i].tuoi) == false);
        do{
            cout<<"Nhap diem toan: ";
            cin>> hs[i].toan;
            if(check(hs[i].toan) == false)
            {
                cout<<"Diem toan khong hop le. Vui long nhap lai!"<<endl;
            }
        }while (check(hs[i].toan) == false);
        do{
            cout<<"Nhap diem van: ";    
            cin>> hs[i].van;
            if(check(hs[i].van) == false)
            {
                cout<<"Diem van khong hop le. Vui long nhap lai!"<<endl;
            }
        }while(check(hs[i].van) == false);
        do{
            cout<<"Nhap diem ngoai ngu: ";
            cin>> hs[i].ngoaingu;
            if(check(hs[i].ngoaingu) == false)
            {
                cout<<"Diem ngoai ngu khong hop le. Vui long nhap lai!"<<endl;
            }
        }while(check(hs[i].ngoaingu) == false);
        hs[i].diemtb = diemtb(hs[i]);
        hs[i].ten = splitten(hs[i].hoten);
    }
}
bool check(hocsinh a)
{
    // Họ tên phải từ 1 đến 50 ký tự
    if (a.hoten.length() < 1 || a.hoten.length() > 50)
    {
        return false;
    }
    // Kiểm tra viết hoa chữ cái đầu mỗi từ
    for (int i = 0; i < a.hoten.length(); i++)
    {
        if (a.hoten[i] == ' ')
        {
            if (a.hoten[i + 1] < 'A' || a.hoten[i + 1] > 'Z')
            {
                return false;
            }
        }
    }
    // Kiểm tra không có ký tự đặc biệt
    for (int i = 0; i < a.hoten.length(); i++)
    {
        if (a.hoten[i] < 'A' || a.hoten[i] > 'Z')
        {
            if (a.hoten[i] < 'a' || a.hoten[i] > 'z')
            {
                if (a.hoten[i] != ' ')
                {
                    return false;
                }
            }
        }
    }
    return true;
}

bool check(int tuoi)
{
    if (tuoi < 0 || tuoi > 100)
    {
        return false;
    }
    return true;
}
bool check(float diem)
{
    if (diem < 0 || diem > 10)
    {
        return false;
    }
    return true;
}

float diemtb(hocsinh a)
{
    return (2*a.toan + a.van + a.ngoaingu) / 4;
}

string phanloai(hocsinh a)
{
    int dtb = diemtb(a);
    if (0 <= dtb && dtb < 5)
        return "Yeu";
    else if(dtb < 6.5)
        return "Trung binh";
        else if (dtb < 8)
        return "Kha";
        else if(dtb < 9)
        return "Gioi";
    return "Xuat sac";
}

void thongtin(hocsinh a)
{
    cout<<"Ten: "<<a.hoten<<endl;
    cout<<"Tuoi: "<<a.tuoi<<endl;
    cout<<"Diem toan: "<<a.toan<<endl;
    cout<<"Diem van: "<<a.van<<endl;
    cout<<"Diem ngoai ngu: "<<a.ngoaingu<<endl;
    cout<<"Diem trung binh: "<<a.diemtb<<endl;
}

void hsxuatsac()
{
    float diemtbmax = 0;
    int ii = -1;
    for (int i=0; i<n; i++)
    {
        if(diemtbmax < hs[i].diemtb)
        {
            diemtbmax = hs[i].diemtb;
            ii = i;
        }
    }
    puts("-----------------------------");
    cout<<"Hoc sinh xuat sac nhat la: "<<endl;
    thongtin(hs[ii]);
}

void hsthapdiemtoan()
{
    float diemtoanmin = 10;
    vector<int> tmp;
    for (int i=0; i<n; i++)
        diemtoanmin = min(diemtoanmin, hs[i].toan);
    for (int i=0; i<n; i++)
    {
        if(hs[i].toan == diemtoanmin)
            tmp.push_back(i);
    }
    puts("-----------------------------");
    puts("Danh sach hoc sinh co diem toan thap nhat: ");
    cout<<setw(20)<<left<<"Ho va ten"<<setw(20)<<left<<"Diem toan"<<endl;
    for(auto i:tmp)
        cout<<setw(20)<<left<<hs[i].hoten<<setw(20)<<left<<hs[i].toan<<endl;
}

string splitten(string s)
{
    int cntspace = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(isspace(s[i]))
        {
            cntspace++;
        }
    }
    int dem = 0;
    for (int i=0; i<s.size(); ++i)
    {
        if(isspace(s[i]))
            dem ++;
        if(dem == cntspace)
        {
            string ten = s.substr(i+1, s.size()-i-1);
            transform(ten.begin(), ten.end(), ten.begin(), ::tolower);
            return ten;
        }
    }
}

void timhs(string ten)
{
    transform(ten.begin(), ten.end(), ten.begin(), ::tolower);
    for (int i = 0; i < n; i++)
    {
        if (hs[i].ten == ten)
        {
            setfill('-');
            puts("Thong tin hoc sinh ban tim la: ");
            thongtin(hs[i]);
        }
    }
}

void xuat()
{
    puts("-----------------------------");
    puts("Danh sach diem trung binh hoc sinh va xep loai:");
    cout<<setw(20)<<left<<"Ho va ten"<<setw(20)<<left<<"Tuoi"<<setw(10)<<left<<"Diem TB"<<setw(10)<<left<<"Xep loai"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<setw(20)<<left<<hs[i].hoten<<setw(20)<<left<<hs[i].tuoi<<setw(10)<<left<<hs[i].diemtb<<setw(10)<<left<<phanloai(hs[i])<<endl;
    }
    hsxuatsac();
    string ten;
    puts("-----------------------------");
    cout<<"Nhap ten hoc sinh can tim: ";
    cin>>ten;
    timhs(ten);
    hsthapdiemtoan();
}