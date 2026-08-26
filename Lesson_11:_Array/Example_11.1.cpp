#include <iostream>
using namespace std;
int main()
{
    float scores[] = {7, 8.5, 9.0, 5.6, 6.4};

    int sizeOfArrayScores = sizeof(scores) / sizeof(scores[0]);

    // cout << "------Bảng điểm của sinh viên------" << endl;
    // for (int i = 0; i < sizeOfArrayScores; i++) // in ra một số giá trị hoặc toàn bộ
    // {
    //     cout << "Môn học " << i + 1 << " " << scores[i] << " điểm" << endl;
    // }

    for (float value : scores) // in ra hết các giá trị của mảng
    {
        cout << "Môn học " << value << " điểm" << endl;
    }
}