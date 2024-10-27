#pragma once
class Diem{
    private:
        float iHoanh, iTung;
    public: 
        Diem();
        Diem(float Hoanh, float Tung);
        Diem(const Diem& x);
        void Nhap();
        void Xuat();
        float GetTungDo();
        float GetHoangDo();
        void SetTungDo(float Tung);
        void SetHoangDo(float Hoanh);
        void TinhTien(float x, float y);
        void Quay(Diem tam, int goc);
        void PhongTo(float k);
};