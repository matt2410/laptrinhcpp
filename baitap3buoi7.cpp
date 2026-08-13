#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter 1 ký tự viết hoa: ";
    cin >> a;
    switch (a)
    {
    case 'A':
        cout << "4.0" << endl;
        break;
    case 'B':
        cout << "3.0" << endl;
        break;
    case 'C':
        cout << "2.0" << endl;
        break;
    case 'D':
        cout << "1.0" << endl;
        break;
    case 'F':
        cout << "0.0" << endl;
        break;
    default:
        cout << "Invalid grade!!!" << endl;
        break;
    }
    return 0;
}

// git add .
// git commit -m "Update code C++ "
// git remote -v
// git remote set-url origin https://github.com/matt2410/laptrinhcpp.git
// git pull
// git push
