// Viết 2 phiên bản của hàm hoán đổi giá trị 2 biến số nguyên:
// 1 phiên bản dùng con trỏ (void swapPointer(int *a, int *b)),
// 1 phiên bản dùng tham chiếu (void swapReference(int &a, int &b)).
// Gọi thử cả 2 hàm trong main() và so sánh cách viết.

#include <iostream>
using namespace std;

void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 79, y = 878;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapPointer(&x, &y);
    cout << "After swapping (using pointers): x = " << x << ", y = " << y << endl;

    int c = 79, d = 878;
    cout << "Before swapping: c = " << c << ", d = " << d << endl;
    swapReference(c, d);
    cout << "After swapping (using references): c = " << c << ", d = " << d << endl;

    return 0;
}