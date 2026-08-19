// BTVN 2 — Kiểm tra số đối xứng (palindrome):
// Đề bài: Nhập số nguyên dương n.
// Dùng vòng lặp while đảo ngược n
// rồi so sánh với n ban đầu để kết luận n có phải số đối xứng không.
// Ví dụ 12321 là số đối xứng, 12345 thì không.
// Gợi ý: lưu lại giá trị gốc của n trước khi đảo.
#include <iostream>
using namespace std;

int main()
{
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;
    int original = n;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    cout << "The reversed number of the input number is " << reversed << endl;
    if (reversed == original)
    {
        cout << original << " is a palindrome number" << endl;
    }
    else
    {
        cout << original << " is not a palindrome number" << endl;
    }
    return 0;
}