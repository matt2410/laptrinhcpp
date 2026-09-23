#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main ()
{
    ifstream inFile ("18.3.txt");
    if (!inFile.is_open())
    {
        return 0;
    }
    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}