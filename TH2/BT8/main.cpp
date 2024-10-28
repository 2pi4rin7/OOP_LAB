#include <iostream>
#include <vector>
#include "List.h"
// Hàm main
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
                break;
            case 2:
                std::cout << "Nhap gia tri x de xoa tat ca: ";
                std::cin >> x;
                list.eraseAll(x);
                break;
            case 3:
                std::cout << "Nhap chi so x va gia tri moi y: ";
                std::cin >> x >> y;
                list.replace(static_cast<unsigned int>(x), y);
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
