#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Enter the number of students (1-10): ";
        cin >> n;
        if (n < 1 || n > 10)
        {
            cout << "The number of students must be between 1 and 10. Please try again." << endl;
        }
    } while (n < 1 || n > 10);
    int a[10];
    cout << "Enter the GPA of each student: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << " ";
    }
    cout << endl;

    // BUBBLE SORT: doi cho cac cap lien ke ngay trong luc quet
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                // doi cho TRONG vong trong
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
