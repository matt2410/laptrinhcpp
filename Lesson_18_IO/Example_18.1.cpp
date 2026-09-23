#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile ("18.1.txt", ios::app); // create and open file and append new texts
    if (!outFile.is_open())
    {
        cout << "File could not found" << endl;
        return 0;
    }
    outFile << "Cheat sheet" << endl;
    outFile.close();
    cout << "Data stored" << endl;
    return 0;
}