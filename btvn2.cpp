#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float r;
    cin >> r;
    float area = PI * r * r;
    cout << "Diện tích hình tròn là: " << area << endl;
    cout << "Chu vi hình tròn là: " << 2 * PI * r << endl;
    return 0;
}