// Nhập số nguyên dương N.
// Tính tổng
// S = 1 - 1 / 2 + 1 / 3 - 1 / 4 + ... ± 1 / N
// (dấu xen kẽ, số hạng lẻ mang dấu cộng).
// In kết quả với 4 chữ số thập phân.
// Gợi ý :
// •Dùng 1 biến giữ dấu hiện tại và đổi dấu sau mỗi vòng lặp.
// •Chú ý kiểu dữ liệu khi chia — kết quả phải có phần thập phân.
// •Để in 4 chữ số thập phân cần #include<iomanip> và dùng fixed << setprecision(4).

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int b;
    int n, sign = 1;
    double sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        sum = sum + sign * (1.0 / a);
        sign = -sign;
    }
    cout << "S = " << fixed << setprecision(4) << sum << endl;
    return 0;
}