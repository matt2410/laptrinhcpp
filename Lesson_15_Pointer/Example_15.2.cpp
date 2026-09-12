#include <iostream>
#include <limits>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main ()
{
    int *h = nullptr;
    int a = 10;
    int *p; // define pointer
    p = &a; // cho pointer den dia chi cua a
    *p = 20; // change the value of a
    cout << "The address of variable a: " << p << endl;
    cout << "The value of variable a: " << *p << endl; // dereference 

    char d = 'X';
    cout << "The address of variable d: " << (void*)&d << endl;

    int x = 100;
    int *b = &x;
    int **c = &b;
    cout << "The value of x through pointer to pointer b: " << **c << endl;
    return 0;
}