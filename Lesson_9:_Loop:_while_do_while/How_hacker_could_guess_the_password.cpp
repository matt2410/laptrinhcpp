#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int password = rand() % 10000; // từ 0 đến 9999

    cout << "Mật khẩu random: " << setw(4) << setfill('0') << password << endl;

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                for (int z = 0; z <= 9; z++)
                {
                    int guess = i * 1000 + j * 100 + k * 10 + z;

                    if (guess == password)
                    {
                        cout << "Your system has been hacked, your password is "
                             << setw(4) << setfill('0') << guess << endl;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}