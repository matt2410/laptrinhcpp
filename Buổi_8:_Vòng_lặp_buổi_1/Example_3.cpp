#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}

// Dùng vòng lặp for duyệt các số từ 1 đến 20.
// Dùng continue để bỏ qua các số chẵn, chỉ in ra các số lẻ.