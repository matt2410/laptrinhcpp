// BTVN 1 — Tìm kiếm và đếm số lần xuất hiện(bắt buộc) :
// Đề bài : Nhập n số nguyên vào 1 mảng và 1 giá trị x cần tìm.
// In ra vị trí xuất hiện ĐẦU TIÊN của x(hoặc thông báo không tìm thấy)
// và tổng số lần x xuất hiện trong mảng.
// Lưu ý 2 yêu cầu này cần 2 cách duyệt khác nhau.

#include <iostream>
using namespace std;
int main()
{
    int n, x, count = 0, b = -1;

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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number you want to find in the array: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            b = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count = count + 1;
        }
    }

    if (count == 0)
    {
        cout << "The number " << x << " does not appear in the array." << endl;
    }
    else
    {
        cout << "The first occurrence of " << x << " is at position " << b + 1 << "." << endl;
        cout << "The number " << x << " appears " << count << " time(s) in the array." << endl;
    }
    return 0;
}