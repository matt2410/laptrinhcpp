#include <iostream>

using namespace std;
int main()
{
    int n, uoc = -2;
    cout << "nhap n: ";
    cin >> n;
    if (n < 2)
    {
        cout << "n phai lon hon hoac bang 2" << endl;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                uoc = i;
                break;
            }
        }

        if (uoc != -2)
        {
            cout << "uoc so nho nhat cua " << n << " la: " << uoc;
        }
        else
        {
            cout << "n la so nguyen to";
        }
    }
    return 0;
}