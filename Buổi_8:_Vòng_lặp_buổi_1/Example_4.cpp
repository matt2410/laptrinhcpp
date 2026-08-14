#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            cout << "Số đầu tiên chia hết cho cả 3 và 5 là: " << i << endl;
            break;
        }
    }
    return 0;
}

// Dùng vòng lặp for duyệt các số từ 1 đến 20.
// Dùng continue để bỏ qua các số chẵn, chỉ in ra các số lẻ.