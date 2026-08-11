#include <iostream>
using namespace std;

// 1. Khai báo các biến: tuổi (số nguyên), chiều cao (số thực, đơn vị mét), tên (chuỗi), tình trạng kết hôn (đúng/sai). Gán giá trị bất kỳ và in ra màn hình.
//  2. Khai báo 3 biến số nguyên a, b, c trên cùng 1 dòng, gán giá trị và in ra tổng.

// 3. Xác định kiểu dữ liệu phù hợp và viết khai báo cho: điểm trung bình môn học,
// số lượng học sinh trong lớp, ký tự xếp loại (A/B/C), tình trạng còn hàng của sản phẩm.
// 4. (Tư duy) Khai báo biến diem kiểu số thực nhưng gán giá trị chuỗi "Tot".
// Dự đoán điều gì xảy ra khi biên dịch?

int main()
{
    int age = 17;
    float height = 1.75;
    string name = "Nguyễn Chu Nhật Quang";
    bool isMarried = false;

    int a = 5, b = 10, c = 15;
    int sum = a + b + c;
    cout << "Tổng của a, b, c là: " << sum << endl;
    return 0;
}