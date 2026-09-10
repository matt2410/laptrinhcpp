// Viết 3 phiên bản nạp chồng của hàm tinhDienTich:
// 1 tham số (hình vuông, cạnh),
// 2 tham số kiểu int (hình chữ nhật),
// 2 tham số kiểu double (dùng cho số thập phân).
// Gọi thử cả 3 phiên bản trong main().

#include <iostream>
using namespace std;

double areaCalculation(double side)
{
    return side * side;
}

int areaCalculation(int side)
{
    return side * side;
}

int areaCalculation(int length, int width)
{
    return length * width;
}

double areaCalculation(double length, double width)
{
    return length * width;
}

int main()
{
    cout << "Area of square with side 5: " << areaCalculation(5) << endl;
    cout << "Area of square with side 5.4: " << areaCalculation(5.4) << endl;
    cout << "Area of rectangle with length 5 and width 3: " << areaCalculation(5, 3) << endl;
    cout << "Area of rectangle with length 5.5 and width 3.2: " << areaCalculation(5.5, 3.2) << endl;
    return 0;
}