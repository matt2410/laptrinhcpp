#include <iostream>
using namespace std;
int main()
{
    int n;
    long long f = 1;
    cout << "Enter n: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Invalid input" << endl;
        main();
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << n << " factorial equals " << f << endl;
    }
    return 0;
}