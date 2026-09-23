#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main ()
{
    ifstream inFile ("18.2.txt");
    // is_open() checks whether the file was opened successfully.
    if (!inFile.is_open())
    {
        cout << "File is not found" << endl;
        return 0;
    }
    string dong;
    // getline() reads one complete line from the file.
    while (getline(inFile, dong))
    {
        cout << dong << endl;
    }
    inFile.close();
    return 0;
}