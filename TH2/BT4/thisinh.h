#include <string>
class ThiSinh{
    private:
        std::string Ten;
        int MSSV;
        int iNgay, iThang, iNam;
        float fToan, fVan, fAnh;
    public: 
        ThiSinh();
        ThiSinh(const ThiSinh &x);
        void Nhap();
        void Xuat();
        int Tong();
};