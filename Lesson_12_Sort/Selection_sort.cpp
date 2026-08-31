// bubble sort, selection sort, quick sort, merge sort - mảng hai chiều
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

    // SELECTION SORT: moi luot chon phan tu nho nhat, doi cho 1 lan
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIdx])
                minIdx = j;
        }
        // doi cho NGOAI vong trong
        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
