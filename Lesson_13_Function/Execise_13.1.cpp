// BTVN 1:
// Đề bài: Viết chương trình gồm 4 hàm đều có
// return: tinhDienTichHCN(dai, rong), tinhChuViHCN(dai, rong), tinhDienTichTronVoiBanKinh(r) và tinhChuViTron(r).
// Dùng hằng số PI = 3.14159. Trong main() gọi cả 4 hàm và in kết quả có 2 chữ số thập phân.

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

double tinhDienTichHCN(double dai, double rong)
{
    return dai * rong;
}

double tinhChuViHCN(double dai, double rong)
{
    return 2 * (dai + rong);
}

double tinhDienTichTronVoiBanKinh(double r)
{
    return PI * r * r;
}

double tinhChuViTron(double r)
{
    return 2 * PI * r;
}

int main()
{
    double dai, rong, r;
    cout << "Nhap chieu dai va chieu rong hinh chu nhat: ";
    cin >> dai >> rong;

    cout << fixed << setprecision(2);
    cout << "Dien tich HCN: " << tinhDienTichHCN(dai, rong) << endl;
    cout << "Chu vi HCN: " << tinhChuViHCN(dai, rong) << endl;

    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;
    cout << "Dien tich tron: " << tinhDienTichTronVoiBanKinh(r) << endl;
    cout << "Chu vi tron: " << tinhChuViTron(r) << endl;

    return 0;
}
