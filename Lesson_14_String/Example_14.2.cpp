#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter your full name: ";
    string fullName;
    getline(cin, fullName);
    cout << "Full name: " << fullName << endl;
    cout << "Age: " << age << endl;
    return 0;
}