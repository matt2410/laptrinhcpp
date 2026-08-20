// Bài 2. In bảng quy đổi nhiệt độ C sang F   (bai2.cpp)
// Nhập 3 số nguyên: nhiệt độ bắt đầu, nhiệt độ kết thúc và bước nhảy.
// Dùng vòng lặp for in ra bảng quy đổi
// từ độ C sang độ F theo công thức F = C x 9 / 5 + 32,
// mỗi mốc nhiệt độ trên 1 dòng.
// Gợi ý:
// •Cả 3 thành phần của vòng lặp for
// (giá trị đầu, điều kiện dừng, bước nhảy) đều lấy từ dữ liệu người dùng nhập.
// •Chú ý phép chia 9 / 5 — kiểm tra kỹ kết quả với mốc 100 độ C.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    double temp;
    cout << "Enter start Celsius value you want to convert: ";
    cin >> a;
    cout << "Enter end Celsius value you want to convert: ";
    cin >> b;
    cout << "Enter the step size: ";
    cin >> c;
    for (; a <= b; a = a + c)
    {
        temp = a * 1.8 + 32;
        cout << a << " C = " << temp << " F" << endl;
    }
    return 0;
}

// nếu nhập giá trị từ ngoài vào thì không cần khai báo biến trong hàm for
// bỏ phần khai báo biến int a trong vòng for,
// để vòng lặp sử dụng biến a đã nhập.