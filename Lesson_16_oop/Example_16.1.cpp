// Thêm 1 constructor cho class SinhVien đã tạo ở bài trước, nhận vào
// hoTen, tuoi, diemTB và gán luôn cho các thuộc tính tương ứng. Tạo 2
// đối tượng mới bằng constructor này (truyền giá trị ngay lúc khai báo)
// và in ra thông tin của cả 2.

#include <iostream>
using namespace std;

class sinhVien
{
private:
    float gpa;
public:
    string name;
    int age;
    float gpa;

    sinhVien (string inpname, int inpage, float inpgpa)
    {
        name = inpname;
        age = inpage;
        gpa = inpgpa;
    }

    sinhVien () {}

};


int main()
{
    sinhVien sv1("Nguyen Chu Nhat Quang", 17, 3.5);

    return 0;
}