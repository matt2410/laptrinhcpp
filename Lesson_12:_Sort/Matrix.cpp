#include <iostream>
using namespace std;
int main()
{
    int a[2][3] = {
        {8, 7, 9}, // hang 0
        {6, 10, 5} // hang 1
    };
    int m = 2, n = 3;
    for (int i = 0; i < m; i++)
    { // vong ngoai: HANG
        for (int j = 0; j < n; j++)
        { // vong trong: COT
            cout << a[i][j] << " ";
        }
        cout << endl; // xuong dong: vong NGOAI
    }
    return 0;
}