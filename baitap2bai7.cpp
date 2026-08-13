#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int result;
    cout << "Nhap 3 so nguyen a, b, c: ";
    cin >> a >> b >> c;
    result = (a > b && a > c) ? a : (b > c && b > a) ? b
                                : (a == b && a > c)  ? a
                                : (a == c && a > b)  ? a
                                : (b == c && b > a)  ? b
                                                     : c;
    cout << "So lon nhat trong 3 so la: " << result << endl;
    return 0;
}