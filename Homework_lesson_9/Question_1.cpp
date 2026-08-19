#include <iostream>
using namespace std;

int main()
{
    int digit_1;
    int test = 0;
    int n;
    int count = 0;
    cout << "Enter a number: ";
    cin >> n;
    int original = n;
    while (n > 0)
    {
        digit_1 = n % 10;
        count++;
        if (digit_1 > test)
        {
            test = digit_1;
        }
        n = n / 10;
    }
    cout << "The number " << original << " has " << count << " digits, the largest digit is " << test << endl;
    return 0;
}
