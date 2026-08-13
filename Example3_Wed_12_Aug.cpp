// Nhập tuổi. Dùng toán tử ba ngôi in ra:
// "Da du tuoi" nếu ≥ 18, ngược lại in "Chua du tuoi".
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    string result = (age >= 18) ? "Enough age" : "Not enough age";
    cout << result << endl;
    return 0;
}