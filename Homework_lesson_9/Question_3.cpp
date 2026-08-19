// BTVN 3 — Tìm ước chung lớn nhất bằng thuật toán Euclid:
// nhập 2 số nguyên dương a và b.
// Dùng vòng lặp while lặp lại phép lấy phần dư a % b cho đến khi b = 0 để tìm
// và in ra ước chung lớn nhất của 2 số.

#include <iostream>
using namespace std;
int main()
{
    int a, b, com;
    cout << "Enter number a: ";
    cin >> a;
    int ori = a;
    cout << "Enter number b: ";
    cin >> b;
    int org = b;
    while (b > 0)
    {
        com = a % b;
        a = b;
        b = com;
    }
    cout << "The greatest divisor of " << ori << " and " << org << " is " << a << endl;
    return 0;
}