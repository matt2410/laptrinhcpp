// Cộng điểm cho tất cả các sinh viên
#include <iostream>
using namespace std;
int main()
{
    float scores[] = {7, 8.5, 9.0, 5.6, 6.4};

    int size = sizeof(scores) / sizeof(scores[0]);
    cout << "------Điểm trước khi cộng------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Môn học " << i + 1 << " " << scores[i] << endl;
        scores[i] = scores[i] + 0.5;
    }

    cout << "------Điểm sau khi cộng------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Môn học " << i + 1 << " " << scores[i] << endl;
    }
}