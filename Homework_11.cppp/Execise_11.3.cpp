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
    cout << "Enter the GPA of each student " << endl;
    int diem[10];
    double find = 10;
    bool timThay = false;
    for (int a = 0; a < n; a++)
    {
        cin >> diem[a];
    }
    for (int i = 0; i < n; i++)
    {
        if (diem[i] == find)
        {
            cout << "\nTim thay sinh vien dat diem " << find << " o vi tri thu " << (i + 1) << endl;
            timThay = true;
            break;
        }
    }
    if (!timThay)
    {
        cout << "\nKhong co sinh vien nao dat diem " << find << endl;
    }
    return 0;
}
