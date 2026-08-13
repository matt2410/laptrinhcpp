#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout << "Enter the time (0-23): ";
    cin >> hour;
    if (hour >= 18 && hour <= 22)
    {
        cout << "Evening" << endl;
    }
    else if (hour >= 14 && hour <= 17)
    {
        cout << "Afternoon" << endl;
    }
    else if (hour >= 12 && hour <= 13)
    {
        cout << "Noon" << endl;
    }
    else if (hour >= 5 && hour <= 11)
    {
        cout << "Morning" << endl;
    }
    else if ((hour >= 0 && hour <= 4) || hour == 23)
    {
        cout << "Midnight" << endl;
    }
    else
    {
        cout << "Invalid time. Please enter a time between 0 and 23." << endl;
    }
    return 0;
}

// Nhập giờ (0–23). In ra:
// "Buoi sang" (5–11) | "Buoi trua" (12–13) | "Buoi chieu" (14–17)
// "Buoi toi" (18–22) | "Nua dem" (còn lại)
// nếu nhập ngoài khoảng 0 -23h thì in ra không hợp lệ