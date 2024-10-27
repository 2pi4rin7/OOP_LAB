class Diem{
    private:
        int iHoanh, iTung;
    public: 
        Diem();
        Diem(int Hoanh, int Tung);
        Diem(const Diem& x);
        void Nhap();
        void Xuat();
        int GetTungDo();
        int GetHoangDo();
        void SetTungDo(int Tung);
        void SetHoangDo(int Hoanh);
        void TinhTien(int x, int y);

};