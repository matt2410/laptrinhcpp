// Viết 2 hàm cùng tính bình phương của 1 số:
// hàm inBinhPhuong chỉ in kết quả ra màn hình,
// hàm tinhBinhPhuong trả về kết quả bằng return.
// Dùng kết quả của tinhBinhPhuong để cộng thêm 10 rồi in ra;
// thử làm tương tự với inBinhPhuong để thấy vì sao không làm được.

#include <iostream>
using namespace std;

void tinhBinhPhuong(int i)
{
    cout << i * i << endl;
}

int inBinhPhuong(int i)
{
    return i * i + 10;
}

int main()
{
    tinhBinhPhuong(8);
    cout << inBinhPhuong(8) << endl;
    return 0;
}
