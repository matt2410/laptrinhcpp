#include <iostream>
using namespace std;

int main()
{
    int workday;
    const int SỐ_NGÀY_TRONG_TUẦN = 7;

    cout << "Số ngày trong tuần là: " << SỐ_NGÀY_TRONG_TUẦN << endl;
    cout << "Số ngày làm việc: ";
    cin >> workday;
    long long lương = workday * 1000000;
    cout << "Lương của bạn trong tuần là: " << lương << endl;
    return 0;
}