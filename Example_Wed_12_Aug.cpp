#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Please enter your exam score: ";
    cin >> score;
    if (score >= 100)
    {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        cout << "Please enter your exam score again: ";
        cin >> score;
    }
    else if (score >= 90)
    {
        cout << "Congratulation ! You have achieved an Excellent grade." << endl;
    }
    else if (score >= 75)
    {
        cout << "Congratulation ! You have achieved a Good grade." << endl;
    }
    else if (score >= 50)
    {
        cout << "Average grade" << endl;
    }
    else
    {
        cout << "Poor grade" << endl;
    }
    return 0;
}

// Nhập điểm thi diem (số thực, thang điểm 100).
//  Dùng if bậc thang xếp loại theo thứ tự:
//  diem ≥ 90 → "Xuat sac";
//  diem ≥ 75 → "Gioi";
//  diem ≥ 50 → "Trung binh";
//  còn lại → "Yeu".

// git add .
// git commit -m "Update code C++ "
// git remote -v
// git remote set-url origin https://github.com/matt2410/laptrinhcpp.git
// git pull
// git push