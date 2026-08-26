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
    int arr[10];
    int i = n - 1;

    // Solution 1:
    // for (; i >= 0; i = i - 1)
    // {
    //     cin >> arr[i];
    // }
    // cout << endl;
    // for (int a = 0; a < n; a++)
    // {
    //     cout << arr[a] << endl;
    // }

    // Solution 2:
    for (int a = 0; a < n; a++)
    {
        cin >> arr[a];
    }
    cout << endl;
    for (; i >= 0; i = i - 1)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}