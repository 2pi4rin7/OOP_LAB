#include <iostream>
#include <vector>
#include "List.h"

int main() {
    List list;
    int n;

    while (true) {
        std::cout << "Nhap chi thi (n = -1 de ket thuc): ";
        std::cin >> n;

        if (n == -1) break;

        double x, y;
        switch (n) {
            case 0:
                std::cout << "Nhap gia tri x de them: ";
                std::cin >> x;
                list.Insert(x);
                break;
            case 1:
                std::cout << "Nhap gia tri x de xoa lan xuat hien dau tien: ";
                std::cin >> x;
                list.eraseFirst(x);
                list.print();
                std::cout<<"\n";
                break;
            case 2:
                std::cout << "Nhap gia tri x de xoa tat ca: ";
                std::cin >> x;
                list.eraseAll(x);
                list.print();
                std::cout<<"\n";
                break;
            case 3:
                std::cout << "Nhap chi so x va gia tri moi y: ";
                std::cin >> x >> y;
                list.replace(static_cast<unsigned int>(x), y);
                list.print();
                std::cout<<"\n";
                break;
            default:
                std::cout << "Chi thi khong hop le!\n";
                break;
        }
    }

    std::cout << "List hien tai: ";
    list.print();

    return 0;
}
