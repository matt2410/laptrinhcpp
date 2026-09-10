#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your full name: ";
    string hoTenDayDu;
    getline(cin, hoTenDayDu);
    size_t length = hoTenDayDu.length();
    string name = hoTenDayDu;

    size_t viTriCachCuoi = hoTenDayDu.find_last_of(' '); // Tìm khoảng trắng CUỐI CÙNG
    string ho = hoTenDayDu.substr(0, viTriCachCuoi);
    string ten = hoTenDayDu.substr(viTriCachCuoi + 1);

    cout << "Họ: " << ho << endl;
    cout << "Tên: " << ten << endl;

    std::string text = "Hello, ";
    // string.append(source, startingPosition, numberOfCharacters);
    text.append(name, 0, length); // append the entire name starting at position 0
    cout << text << endl;

    std::string test = "one two one";
    // string.rfind(source, startingPosition);
    size_t position = test.rfind("one");
    // searches from the end of the string.
    cout << position << endl; // 8

    std::string text1 = "Hello World";
    // string.erase(startPosition, numberOfCharacters);
    text1.erase(5, 6);
    cout << text1 << endl; // Hello

    std::string text2 = "I like Java";
    // string.replace(startPosition, numberOfCharacters, replacement);
    text2.replace(7, 4, "C++");
    cout << text2 << endl; // I like C++
    return 0;
}