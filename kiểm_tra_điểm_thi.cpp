#include <iostream>
using namespace std;

int main()
{
    int point;
    cout << "Nhập điểm thi của bạn: ";
    cin >> point;
    if (point >= 0 && point <= 10)
    {
        cout << "Điểm thi hợp lệ." << endl;
    }
    else
    {
        cout << "Điểm thi không hợp lệ." << endl;
    }
    return 0;
}