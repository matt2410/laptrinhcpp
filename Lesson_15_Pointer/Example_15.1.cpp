#include <iostream>
using namespace std;

void swapPointer(int *a, int *b) // toan tu giai tham chieu - dereference - * asterisk
// truy cap vao gia tri tai dia chi ma con tro dang tro toi
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
    swapPointer(&x, &y); // & (ampersand)
    cout << "After swapping (using pointers): x = " << x << ", y = " << y << endl;

    int c = 79, d = 878;
    cout << "Before swapping: c = " << c << ", d = " << d << endl;
    swapReference(c, d);
    cout << "After swapping (using references): c = " << c << ", d = " << d << endl;

    return 0;
}