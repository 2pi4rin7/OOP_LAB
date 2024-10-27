#include <bits/stdc++.h>
using namespace std;

/*
    Từ công thức đề bài ta rút ra khoảng cách giữa 2 giá trị là x*x / (2n(2n+1)
*/
double Sin(double x) {
    double term = x; 
    double sum = term;
    int n = 1; 

    while (abs(term) >= 0.00001) {
        term *= -x * x / (2 * n * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}

/*
    Hàm xử lý x để nó không vượt quá 2*PI và không nhỏ hơn -2*PI
*/
double Xuly(double x) {
    while (x > 2 * M_PI) {
        x -= 2 * M_PI;
    }
    while (x < -2 * M_PI) {
        x += 2 * M_PI;
    }
    return x;
}

int main() {
    double x;
    cout << "Nhap x (radiant): ";
    cin >> x;
    x = Xuly(x);
    double result = Sin(x);
    cout << "Sin(" << x << ") = " << result << endl;

    return 0;
}