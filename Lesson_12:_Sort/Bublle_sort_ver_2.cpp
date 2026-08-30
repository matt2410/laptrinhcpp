#include <iostream>
using namespace std;
void bubble_sort(int a[], int n);

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
    bubble_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void bubble_sort(int a[], int n)
{
    bool swapped;
    int i = 0;
    do
    {
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }
        }
        i++;
    } while (swapped);
}