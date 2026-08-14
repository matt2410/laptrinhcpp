#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "nhập số n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Tổng của n số là: " << sum << endl;
    return 0;
}

// khai bao va nhap n
// khai bao bien tong sum = 0; 5
// for i = 1; <=n; i++
// sum = sum + i
// in ra sum