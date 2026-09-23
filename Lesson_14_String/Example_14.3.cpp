#include <iostream>
#include <string>
using namespace std;
using namespace std::string_literals;

#include <iostream>
using namespace std;

int main() 
{
    string email = "nguyenvanan@gmail.com";
    int viTriAt = email.find("@");
    string tenMien = email.substr(viTriAt);

    cout << "Ten mien: " << tenMien << endl;

    string phanSau = email.substr(0, viTriAt - 1);
    cout << "Phan sau: " << phanSau << endl;

    return 0;
}