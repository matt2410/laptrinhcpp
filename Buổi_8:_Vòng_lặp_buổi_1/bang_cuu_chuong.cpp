#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        int b = n * i;
        cout << n << " x " << i << " = " << b << endl;
    }
    return 0;
}

// Nhập số nguyên N (2–9).
// Dùng vòng lặp for in ra bảng cửu chương của N,
// từ N × 1 đến N × 10, mỗi phép tính trên 1 dòng.