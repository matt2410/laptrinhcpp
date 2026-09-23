#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main ()
{
    ofstream outFile("out.txt", ios::app);
    string s;
    getline(cin, s);
    outFile << s + "\n";
    return 0;
}