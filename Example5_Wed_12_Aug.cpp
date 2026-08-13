#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "You have choosen coke." << endl;
        break;
    case 2:
        cout << "You have choosen pepsi." << endl;
        break;
    case 3:
        cout << "You have choosen sprite." << endl;
        break;
    default:
        cout << "Cook" << endl;
        break;
    }
    return 0;
}