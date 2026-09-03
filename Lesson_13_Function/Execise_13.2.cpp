// Viết chương trình gồm 3 hàm trả về kiểu bool:
// laSoChan(n), laSoNguyenTo(n) và laNamNhuan(nam).
// Trong main() nhập 1 số và 1 năm rồi gọi cả 3 hàm,
// in kết quả dạng "Co" hoặc "Khong".
// Gợi ý: hàm trả về bool dùng được thẳng trong câu lệnh if.

#include <iostream>
#include <cmath>
using namespace std;

bool evenNumber(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool primeNumber(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool leapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, year;
    do
    {
        cout << "Enter an integer: ";
        cin >> n;
        if (n < 0)
        {
            cout << "Please enter a non-negative integer." << endl;
        }
    } while (n < 0);

    if (evenNumber(n))
    {
        cout << n << " is an even number." << endl;
    }
    else
    {
        cout << n << " is not an even number." << endl;
    }

    if (primeNumber(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    cout << endl;

    do
    {
        cout << "Enter a year: ";
        cin >> year;
        if (year <= 0)
        {
            cout << "Please enter a valid year." << endl;
        }
    } while (year <= 0);

    if (leapYear(year))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}