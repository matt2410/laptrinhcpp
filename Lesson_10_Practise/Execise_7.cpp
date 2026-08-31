// Nhập số nguyên dương n.
// Lặp lại quy tắc sau cho đến khi n = 1:
// nếu n chẵn thì gán n = n / 2,
// nếu n lẻ thì gán n = 3 * n + 1.
// Đếm và in ra số bước đã thực hiện.
// Ví dụ với n = 6,
// dãy đi qua 6 → 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1,
// tức 8 bước.
// Gợi ý:
// • Số lần lặp không thể biết trước
// vì n lúc tăng lúc gieảm — hãy chọn loại vòng lặp phù hợp.
// • Thử với n = 27 để thấy dãy này có thể dài đến mức nào.

#include <iostream>
using namespace std;

int main()
{
    int n, count;
    cout << "Enter n: ";
    cin >> n;
    cout << "Dãy Collatz ";
    while (n != 1)
    {
        cout << n << " → ";
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        count++;
    }
    cout << "1" << endl;
    cout << "Số bước là " << count << endl;
    return 0;
}