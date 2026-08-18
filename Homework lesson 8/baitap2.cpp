#include <iostream>
using namespace std;
int main()
{
    int n;
    long sum = 0;
    int num = 0;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
            num = num + 1;
        }
    }
    cout << "The number of numbers divisible by three is " << num << endl;
    cout << "The sum of the terms divided by three is " << sum << endl;
    return 0;
}