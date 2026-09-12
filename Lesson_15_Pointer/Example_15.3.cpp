#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <limits>
using namespace std;

int main()
{
    int a[5] = {1, 4543, 392, 43729, 4957};
    int *p = a;
    // ~
    int *c = &a[0];
    for (int i = 0; i < 5; i++)
    {
        cout << *p << "  ";
        p++;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(c + i) << "  "; // a[i] ~ *(p + 1)
    }
    cout << endl;
    return 0;
}