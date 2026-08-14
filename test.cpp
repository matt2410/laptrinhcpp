#include <iostream>
using namespace std;

int main()
{
    int thu = 3;

    switch (thu)
    {
    case 1:
        cout << "Thu Hai" << endl;
    case 2:
        cout << "Thu Ba" << endl;
    case 3:
        cout << "Thu Tu" << endl;
    case 4:
        cout << "Thu Nam" << endl;
        break;
    case 5:
        cout << "Thu Sau" << endl;
        break;
    default:
        cout << "Ngay khong hop le" << endl;
    }

    return 0;
}