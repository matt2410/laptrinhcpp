// BTVN 4 — Trò chơi đoán số có giới hạn lượt :
// Đề bài:
// mở rộng trò chơi đoán số:
// người chơi chỉ có tối đa 7 lượt đoán.
// Dùng do...while kết hợp điều kiện kép
// — dừng khi đoán đúng HOẶC hết lượt.
// Kết thúc in ra người chơi thắng hay thua
// và số bí mật là bao nhiêu.
#include <iostream>
using namespace std;
int main()
{
    int count = 0, a;
    int secret_num = 24;
    do
    {
        cout << "Enter the number you guess from 1 to 100: ";
        cin >> a;
        count++;
        if (a == secret_num)
        {
            cout << "Congratulation! You just guess the correct number "
                 << secret_num
                 << " on your " << count << " chance" << endl;
            break;
        }

        if (count <= 5)
        {
            cout << "You have " << 7 - count
                 << " more chances to go" << endl;
        }
        else if (count == 6)
        {
            cout << "You have one last chance"
                 << endl;
        }
        else
        {
            cout << "The numbers you have guessed are incorrect"
                 << endl;
            cout << "The secret number is " << secret_num << endl;
        }
    } while (count != 7);
    return 0;
}