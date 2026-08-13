#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Enter a number: ";
    cin >> n;
    float std = (n >= 0) ? n : -n;
    cout << "The absolute value is: " << std << endl;
    return 0;
}