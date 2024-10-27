#include <bits/stdc++.h>
using namespace std;

struct day
{
    int day, month, year;
};

struct timeflight
{
    int hour, minute;
};

struct flight
{
    string id, ngay, gio;
    day d;
    timeflight t;
    string from, to;
};

int NgaykoNhuan[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int NgayNhuan[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int n, nsize = 0;
flight cb[100];

bool checkday(int ngay, int thang, int nam);
void input();
void error();
void output();
void menu();
void count(string from, string to);
void search(string srch, string day);
bool checkcb(string chuyenbay);
bool checklocaiton(string location);
int main()
{
    int choose;
    while(1)
    {
        menu();
        cin>>choose;
        #ifdef _WIN32
        system("cls");
        #else 
        system("clear");
        #endif
        switch(choose)
        {
        case 1:
            input();
            break;
        case 2:
            output();
            break;
        case 3:
            {
                string from, to;
                cout<<"Nhap noi di: ";
                cin.ignore();
                getline(cin, from);
                cout<<"Nhap noi den: ";
                getline(cin, to);
                count(from, to);
            }
            break;
        case 4:
            {
                string srch;
                cout<<"Nhap ma chuyen bay hoac noi di/noi den: ";
                cin.ignore();
                getline(cin, srch);
                cout<<"Nhap ngay bay (DD/MM/YYYY) hoac nhan enter de bo qua: ";
                string day;
                getline(cin, day);
                search(srch, day);
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            error();
        }
    }
    return 0;
}

void input()
{
    setfill('-');
    cout<<"Nhap so luong chuyen bay: ";
    cin>>n;
    cout<<"Nhap thong tin chuyen bay: "<<endl;
    for (int i=nsize, tmp = n + nsize; i<tmp; i++)
    {
        cout<<"Nhap chuyen bay thu "<<i+1<<": "<<endl;
        do{
        cout<<"Nhap ma chuyen bay: ";
        cin>>cb[i].id;
        if(checkcb(cb[i].id) == false)
        {
            error();
        }
        }while(checkcb(cb[i].id) == false);
        cout<<"Nhap ngay bay (DD/MM/YYYY): ";
        do{
        cin>>cb[i].d.day>>cb[i].d.month>>cb[i].d.year;
        cb[i].ngay = to_string(cb[i].d.day) + "/" + to_string(cb[i].d.month) + "/" + to_string(cb[i].d.year);
        if(checkday(cb[i].d.day, cb[i].d.month, cb[i].d.year) == false)
        {
            error();
        }
        }while(checkday(cb[i].d.day, cb[i].d.month, cb[i].d.year) == false);
        cout<<"Nhap gio bay (hh:mm): ";
        do{
        cin>>cb[i].t.hour>>cb[i].t.minute;
        cb[i].gio = to_string(cb[i].t.hour) + ":" + to_string(cb[i].t.minute);
        if(cb[i].t.hour < 0 || cb[i].t.hour > 23 || cb[i].t.minute < 0 || cb[i].t.minute > 59)
        {
            error();
        }
        }while(cb[i].t.hour < 0 || cb[i].t.hour > 23 || cb[i].t.minute < 0 || cb[i].t.minute > 59);
        cin.ignore();
        do{
        cout<<"Nhap noi di: ";
        getline(cin, cb[i].from);
        if(checklocaiton(cb[i].from) == false)
        {
            error();
        }
        }while(checklocaiton(cb[i].from) == false);
        do{
        cout<<"Nhap noi den: ";
        getline(cin, cb[i].to);
        if(checklocaiton(cb[i].to) == false)
        {
            error();
        }
        }while(checklocaiton(cb[i].to) == false);
        nsize ++;
    }
}


void menu()
{
    
    cout<<"====================MENU===================="<<endl;
    puts("1. Nhap thong tin chuyen bay");
    puts("2. Xuat thong tin chuyen bay");
    puts("3. Dem so luong chuyen bai tu noi di den noi den");
    puts("4. Tiem kiem chuyen bay");
    puts("5. Thoat");
    setfill("-");
    cout<<"============================================"<<endl;
    cout<<("Please choose: ");
    
}

void error()
{
    cout<<"Du lieu nhap vao khong hop le. Vui long nhap lai!"<<endl;
}

bool checklocaiton(string location)
{
    for(int i=0; i<location.size(); i++)
    {
        if(('a' < location[i] && location [i] < 'z') || ('A' < location[i] && location[i] < 'Z') || isspace(location[i]))
            return true;
    }
    return false;
}


bool checkcb(string chuyenbay)
{
    for(int i = 0; i<nsize; i++)
    {
        if(cb[i].id != chuyenbay)
            return true;
        else return false;
    }
    for(int i=0; i<chuyenbay.size(); i++)
    {
        if(('A' < chuyenbay[i] &&  chuyenbay[i] < 'Z') || ('0' < chuyenbay[i] && chuyenbay[i] < '9')|| isspace(chuyenbay[i]))
            return true;
    }
    if(chuyenbay.size() <= 5)
        return true;
    return false;
}

bool checkday(int ngay, int thang, int nam)
{
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
    {
        if (ngay > 0 && ngay <= NgayNhuan[thang] && thang > 0 && thang <= 12)
        {
            return true;
        } 
    }
    else
    {
        if (ngay > 0 && ngay <= NgaykoNhuan[thang] && thang > 0 && thang <= 12)
        {
            return true;
        }
    }
    return false;
}

bool csort(flight a, flight b)
{
    if(a.d.year < b.d.year)
        return true;
    if(a.d.year == b.d.year && a.d.month < b.d.month)
        return true;
    if(a.d.year == b.d.year && a.d.month == b.d.month && a.d.day < b.d.day)
        return true;
    if(a.d.year == b.d.year && a.d.month == b.d.month && a.d.day == b.d.day && a.t.hour < b.t.hour)
        return true;
    if(a.d.year == b.d.year && a.d.month == b.d.month && a.d.day == b.d.day && a.t.hour == b.t.hour && a.t.minute < b.t.minute)
        return true;
    return false;
}

void output()
{
    sort(cb, cb+nsize, csort);
    cout<<"Danh sach chuyen bay: "<<endl;
    cout<<setw(20)<<left<<"Ma chuyen bay"<<setw(20)<<left<<"Ngay bay"<<setw(20)<<left<<"Gio bay"<<setw(20)<<left<<"Noi di"<<setw(20)<<left<<"Noi den"<<endl;
    for(int i=0; i<nsize; i++)
    {
        cout<<setw(20)<<left<<cb[i].id<<setw(20)<<left<<cb[i].ngay<<setw(20)<<left<<cb[i].gio<<setw(20)<<left<<cb[i].from<<setw(20)<<left<<cb[i].to<<endl;
    }
    return;
}

void count(string from, string to)
{
    int cnt = 0;
    for(int i=0; i<nsize; i++)
    {
        if(cb[i].from == from && cb[i].to == to)
        {
            cnt++;
        }
    }
    cout<<"So luong chuyen bay tu "<<from<<" den "<<to<<" la: "<<cnt<<endl;
    return;
}

void search(string srch, string day)
{
    bool flag = 0;
    cout<<"Thong tin chuyen bay can tim: "<<endl;
    cout<<setw(20)<<left<<"Ma chuyen bay"<<setw(20)<<left<<"Ngay bay"<<setw(20)<<left<<"Gio bay"<<setw(20)<<left<<"Noi di"<<setw(20)<<left<<"Noi den"<<endl;
    for(int i=0; i<nsize; i++)
    {
        if(cb[i].id == srch)
        {
            flag = 1;
            cout<<setw(20)<<left<<cb[i].id<<setw(20)<<left<<cb[i].ngay<<setw(20)<<left<<cb[i].gio<<setw(20)<<left<<cb[i].from<<setw(20)<<left<<cb[i].to<<endl;
            return;
        }
    }
    for (int i=0; i<nsize; i++)
    {
        if(cb[i].from == srch || cb[i].to == srch)
        {
            if(cb[i].ngay == day)
            {
                flag = 1;
                cout<<setw(20)<<left<<cb[i].id<<setw(20)<<left<<cb[i].ngay<<setw(20)<<left<<cb[i].gio<<setw(20)<<left<<cb[i].from<<setw(20)<<left<<cb[i].to<<endl;
            }
        } 
    }
    if(day.size() != 10)
    {
        for (int i=0; i<nsize; i++)
        {
            if(cb[i].from == srch || cb[i].to == srch)
            {
                flag = 1;
                cout<<setw(20)<<left<<cb[i].id<<setw(20)<<left<<cb[i].ngay<<setw(20)<<left<<cb[i].gio<<setw(20)<<left<<cb[i].from<<setw(20)<<left<<cb[i].to<<endl;
            }    
        }
    }
    if(!flag)
        cout<<"Khong tim thay chuyen bay can tim!"<<endl;
    return;
}
