#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void elementCount(string str) 
{
    int letterCount = 0;
    int digitCount = 0;
    int spaceCount = 0;

    for (size_t i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (isalpha(ch)) {
            letterCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        } else if (isspace(ch)) {
            spaceCount++;
        }
    }
    cout << "\nNumber of letters: " << letterCount << endl;
    cout << "Number of digits: " << digitCount << endl;
    cout << "Number of spaces: " << spaceCount << endl;
}

int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    elementCount(str);
    return 0;
}