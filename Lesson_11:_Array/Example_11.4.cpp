// Nhập số lượng sinh viên n. Dùng vòng lặp nhập điểm của n sinh viên
// vào 1 mảng số thực. Sau đó xuất lại toàn bộ bảng điểm ra màn hình,
// mỗi điểm cách nhau 1 khoảng trắng.

#include <iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Enter the number of students: ";
        cin >> n;
        if (n > 10)
        {
            cout << "Invalid number" << endl;
        }
    } while (n > 10);

    float scores[n];
    cout << "------Enter the GPA of each student------" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    cout << endl;
    cout << "------The GPA of each student------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": " << scores[i] << endl;
    }
    return 0;
}