#include <iostream>
using namespace std;

long long fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    long long f1 = 1;
    long long f2 = 1;
    long long fn = 0;

    for (int i = 3; i <= n; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

    return f2;
}

int main()
{
    int n;

    cout << "Nhap n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "n phai la so nguyen duong";
    }
    else
    {
        cout << "So Fibonacci thu " << n << " la: "
             << fibonacci(n);
    }

    return 0;
}