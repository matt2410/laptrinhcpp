// "Vừa gà vừa chó Bó lại cho tròn Ba mươi sáu con Một trăm chân chẵn"

// Tìm số lượng con gà và số lượng con chó thỏa mãn điều kiện trên
// (Tổng con = 36, Tổng chân = 100).

#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cout << "Enter tổng số gà và chó: ";
    cin >> n;
    cout << "Enter tổng số chân gà và chó: ";
    cin >> a;
    for (int x = 0; x <= a; x++) // x = số lượng chó
    {
        for (int y = 0; y <= a; y++) // y = số lượng gà
        {
            if (a == 4 * x + 2 * y && x + y == n)
            {
                cout << "Số lượng gà là: " << y << endl;
                cout << "Số lượng chó là: " << x << endl;
            }
        }
    }
    return 0;
}