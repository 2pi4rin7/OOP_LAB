#pragma once
class List
{
    private:
        double* data;          // Con trỏ quản lý mảng động
        unsigned int size;     // Kích thước của list
    public:
        List();
        ~List();
        unsigned int Size();
        void Insert(double x);
        void eraseFirst(double x);
        void eraseAll(double x);
        void replace(unsigned int x, double y);
        void print();
    private:
        void Erase(int index);
};