#include <iostream>
using namespace std;

int main()
{
    int h;
    cout << "Enter height: ";
    cin >> h;
    for (int r = 1; r <= h; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << "x";
        }
        cout << endl;
    }
    return 0;
}