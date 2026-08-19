// Bài 4. Đếm số lần xuất hiện của 1 chữ số trong số n
// Nhập số nguyên dương n và 1 chữ số k (từ 0 đến 9).
// Dùng vòng lặp while đếm xem chữ số k xuất hiện bao nhiêu lần trong n, in ra kết quả.
// Gợi ý:
// • Dùng lại kỹ thuật tách chữ số đã học buổi trước: n % 10 lấy chữ số cuối, n / 10 bỏ chữ số cuối.
// • Thứ tự 2 phép này rất quan trọng — làm ngược sẽ mất chữ số.

#include <iostream>
using namespace std;

int main()
{
    int n, k, ori, count = 0;
    cout << "Enter n: ";
    cin >> n;
    ori = n;
    cout << "Enter k: ";
    cin >> k;
    while (n > 0)
    {
        if (n % 10 == k)
        {
            count++;
        }
        n = n / 10;
    }
    cout << "Số chữ số " << k << " trong số "
         << ori << " là " << count << endl;
    return 0;
}