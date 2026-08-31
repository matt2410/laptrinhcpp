// Dùng vòng lặp while liên tục nhập số nguyên từ bàn phím
// và cộng dồn vào tổng, cho đến khi người dùng nhập số 0
// thì dừng lại và in ra tổng.
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter n: ";
    cin >> n;
    while (n != 0)
    {
        sum = sum + n;
        cout << "Enter n: ";
        cin >> n;
    }
    cout << "The sum of the entered numbers is " << sum << endl;
    return 0;
}