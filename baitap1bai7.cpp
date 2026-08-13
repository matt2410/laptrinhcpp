#include <iostream>
using namespace std;
int main()
{
    float score;
    cout << "Enter your score: ";
    cin >> score;
    if (score >= 0 && score <= 10)
    {
        if (score >= 8.5)
        {
            cout << "Gioi!" << endl;
        }
        else if (score >= 6.5)
        {
            cout << "Khá" << endl;
        }
        else if (score >= 5)
        {
            cout << "Trung bình" << endl;
        }
        else
        {
            cout << "Yếu" << endl;
        }
    }
    else
    {
        cout << "Invalid score!!!" << endl;
    }
    return 0;
}