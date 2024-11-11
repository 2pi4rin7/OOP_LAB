#include "thoigian.h"
using namespace std;
int main()
{
    ThoiGian tg1, tg2;
    cin >> tg1 >> tg2;
    cout << tg1 << endl;
    cout << tg2 << endl;
    cout << "tg1 + tg2: " << tg1 + tg2 << endl;
    cout << "tg1 - tg2: " << tg1 - tg2 << endl;
    cout << "++tg1: " << ++tg1 << endl;
    cout << "tg1++: " << tg1++ << endl;
    cout << "--tg2: " << --tg2 << endl;
    cout << "tg2--: " << tg2-- << endl;
    cout << "tg1 == tg2: " << (tg1 == tg2) << endl;
    cout << "tg1 != tg2: " << (tg1 != tg2) << endl;
    cout << "tg1 >= tg2: " << (tg1 >= tg2) << endl;
    cout << "tg1 <= tg2: " << (tg1 <= tg2) << endl;
    cout << "tg1 > tg2: " << (tg1 > tg2) << endl;
    cout << "tg1 < tg2: " << (tg1 < tg2) << endl;
    return 0;
}