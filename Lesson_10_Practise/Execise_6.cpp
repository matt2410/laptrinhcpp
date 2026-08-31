// Nhập số nguyên dương n.
// Số hoàn hảo là số bằng tổng các ước của nó (không kể chính nó).
// Ví dụ 6 = 1 + 2 + 3
// nên 6 là số hoàn hảo.
// Tính tổng các ước của n rồi in ra kết luận n có phải số hoàn hảo hay không.
// Gợi ý:
// • Duyệt các số từ 1 đến n - 1,
// số nào là ước của n thì cộng dồn vào tổng.
// • Phần so sánh và kết luận nằm SAU vòng lặp,
// khi đã cộng đủ hết các ước.

#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    if (sum == n)
    {
        cout << n << " là số hoàn hảo" << endl;
    }
    else
    {
        cout << n << " không phải là số hoàn hảo" << endl;
    }
    return 0;
}