// Đề bài: Viết chương trình có hàm tinhTienHang(soLuong, donGia, phanTramGiam = 0)
// trả về số tiền phải trả sau khi trừ phần trăm giảm giá.
// Gọi thử 3 lần: không giảm giá, giảm 10%, giảm 50%. In kết quả từng lần.

#include <iostream>
using namespace std;

int paycheck(int quantity, int unitPrice, int discount = 0)
{
    return quantity * unitPrice * (100 - discount) / 100;
}

int main()
{
    cout << paycheck(5, 10000) << endl;     // Không giảm giá
    cout << paycheck(5, 10000, 10) << endl; // Giảm 10%
    cout << paycheck(5, 10000, 50) << endl; // Giảm 50%
    return 0;
}