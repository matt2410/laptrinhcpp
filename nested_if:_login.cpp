#include <iostream>
using namespace std;

int main()
{
    string password, username;
    cout << "Nhập username: ";
    cin >> username;
    cout << "Nhập password: ";
    cin >> password;
    if (username == "Louis")
    {
        if (password == "123456")
        {
            cout << "Đăng nhập thành công" << endl;
        }
        else
        {
            cout << "Sai password" << endl;
        }
    }
    else
    {
        cout << "Sai username" << endl;
    }
    return 0;
}