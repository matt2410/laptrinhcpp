#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main ()
{
    ifstream inFile ("18.2.txt", ios::in);
    if (!inFile.is_open())
    {
        cout << "Could not open file" << endl;
    }
    int num;
    int sum;
    while (inFile >> num)
    {
        sum += num;
    }
    cout << "Sum of the array of number is file: " << sum << endl;
    inFile.close();
    return 0;
}