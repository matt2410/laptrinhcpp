#include <iostream>
#include <fstream>
using namespace std;
 
int main ()
{
    ofstream outFile ("hello.txt");
    outFile << "Hello world";
    outFile.close();
    return 0;
}