// BTVN 2 — Đảo ngược mảng:
// Viết chương trình nhập n số nguyên vào 1 mảng,
// in mảng gốc, sau đó in mảng theo thứ tự ngược lại.
// Làm theo 2 cách :
// cách 1 chỉ duyệt lùi khi in(mảng không đổi),
// cách 2 thực sự hoán đổi các phần tử trong mảng rồi in duyệt tiến.

#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Enter the number of elements in the array (1-10): ";
        cin >> n;
        if (n < 1 || n > 10)
        {
            cout << "The array size must be between 1 and 10. Please try again." << endl;
        }
    } while (n < 1 || n > 10);
    cout << "Enter " << n << " integer(s):" << endl;
    int a[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Solution 1:
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    // Solution 2:
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[a];
    // }
    // cout << endl;
    // for (; i >= 0; i = i - 1)
    // {
    //     cout << a[i] << endl;
    // }

    cout << endl;
    return 0;
}