#include <iostream>
using namespace std;

void timMinMax(int arr[], int n, int &min, int &max)
{
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main()
{
    int arr[6] = {8, 3, 9, 1, 7, 5};
    int giaTriMin, giaTriMax;

    timMinMax(arr, 6, giaTriMin, giaTriMax);

    cout << "Gia tri nho nhat: " << giaTriMin << endl;
    cout << "Gia tri lon nhat: " << giaTriMax << endl;
}