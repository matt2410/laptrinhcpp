// Đề bài: Viết chương trình nhập số nguyên dương n (n >= 2).
// Dùng vòng lặp for kết hợp break tìm và in ra ước số nhỏ nhất lớn hơn 1 của n.
// Nếu không tìm được ước nào nhỏ hơn n thì in ra "n la so nguyen to".
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n (n >= 2): ";
    cin >> n;
    if (n > 2)
    {
        for (int r = 2; r < n; r++)
        {
            if (n % r == 0)
            {
                cout << "The smallest divisor of " << n << " is " << r << endl;
                break;
            }
            else if (n % (r + 1) == 0)
            {
                cout << n << " is the prime number" << endl;
            }
        }
    }
    else if (n == 2)
    {
        cout << n << " is the prime number" << endl;
    }
    else
    {
        cout << "Invalid number, please try again" << endl;
        main();
    }
    return 0;
}