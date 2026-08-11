#include <iostream>
using namespace std;

int main()
{
    string name; // Declare a string variable to store the user's name
    string className;

    cout << "Nhập họ và tên của bạn: ";
    getline(cin, name);

    cout << "Nhập lớp của bạn: ";
    getline(cin, className);

    cout << "Xin chào, " << name << ", " << "lớp " << className << endl;
    return 0;
}