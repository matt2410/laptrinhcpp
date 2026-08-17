// BTVN 2 — Đếm và tính tổng các số chia hết cho 3:
// Dùng vòng lặp for duyệt từ 1 đến N,
// Dùng continue để bỏ qua các số không chia hết cho 3,
// sau đó in ra: số lượng các số chia hết cho 3 và tổng của chúng.
#include <iostream>
using namespace std;
int main()
{
    int n;
    long sum = 0;
    int num = 0;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
            num = num + 1;
        }
    }
    cout << "The number of numbers divisible by three is " << num << endl;
    cout << "The sum of the terms divided by three is " << sum << endl;
    return 0;
}