// Bài 3. In các số chính phương không vượt quá N (bai3.cpp)
// Nhập số nguyên dương N. In ra tất cả các số chính phương (1, 4, 9, 16, 25, ...) không vượt quá N.
// Các số in trên cùng 1 dòng, cách nhau bởi dấu cách.
// Gợi ý:
// • Số chính phương là số bằng bình phương của một số nguyên.
// • Đề giới hạn giá trị IN RA, không giới hạn biến đếm
// hãy cân nhắc kỹ điều kiện dừng của vòng lặp.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;

    while (i * i <= n)
    {
        cout << i * i << " ";
        i++;
    }
    cout << endl;
    return 0;
}