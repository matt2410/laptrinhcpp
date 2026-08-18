#include <iostream>
using namespace std;
#include <string>

int main()
{
    string password = "9999";
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                for (int z = 0; z <= 9; z++)
                {
                    if (to_string(i) + to_string(j) + to_string(k) + to_string(z) == password)
                    {
                        cout << "Your system has been hacked, your password is " << to_string(i) << to_string(j) << to_string(k) << to_string(z) << endl;
                    }
                }
            }
        }
    }
    return 0;
}