#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhập số n: ";
    cin >> n;
    if (n > 0)
    {
        cout << n << " là số dương" << endl;
    }
    else
    {
        if (n < 0)
        {
            cout << n << " là số âm" << endl;
        }
        else
        {
            cout << n << " không phải là số dương cũng không phải là số âm" << endl;
        }
    }
    return 0;
}