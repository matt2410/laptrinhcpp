#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string removeExtraSpaces(string &ten)
{
    string nameWithoutSpace = "";
    bool truocDoLaKhoangTrang = false;

    for (size_t i = 0; i < ten.length(); i++) 
    {
        char kyTu = ten[i];
        if (isspace(kyTu)) 
        {
            if (!truocDoLaKhoangTrang) 
            {
                nameWithoutSpace += ' ';
            }
            truocDoLaKhoangTrang = true;
        } 
        else 
        {
            nameWithoutSpace += kyTu;
            truocDoLaKhoangTrang = false;
        }
    }
    size_t batDau = nameWithoutSpace.find_first_not_of(' ');
    // find the first non-space character in the string
    size_t ketThuc = nameWithoutSpace.find_last_not_of(' ');
    // find the last non-space character in the string

    if (batDau != string::npos) 
    // string::npos indicates that no non-space character was found
    {
        nameWithoutSpace = nameWithoutSpace.substr(batDau, ketThuc - batDau + 1);
        // substr(startPosition, length) extracts a substring from the string
    }
    return nameWithoutSpace;
}

void outputName(string &a)
{
    string name = a;
    bool firstAlpha = true;

    for (size_t i = 0; i < name.length(); i++) 
    {
        if (name[i] == ' ') 
        {
            firstAlpha = true;
        } 
        else if (firstAlpha) 
        {
            name[i] = toupper(name[i]);   // Viet hoa CHU CAI DAU
            firstAlpha = false;
        } 
        else 
        {
            name[i] = tolower(name[i]);   // Cac chu con lai VIET THUONG
        }
    }
    cout << "Your full name is: " << name << endl;
}

int main() 
{
    string ten;
    cout << "Enter your full name (co the co khoang trang thua): ";
    getline(cin, ten);
    outputName(removeExtraSpaces(ten));
    return 0;
}
