#include <iostream>
using namespace std;

int main()
{
    // Tinh tong cac chu so cua n
    int tong = 0;
    long n;
    cout << "Enter n: ";
    cin >> n;
    int i = n;
    while (n > 0)
    {
        tong += n % 10; // lay chu so cuoi
        n = n / 10;     // bo chu so cuoi
    }
    cout << "The sum of the digits of number " << i << " is " << tong << endl;
    return 0;
}