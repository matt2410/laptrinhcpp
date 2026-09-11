#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your full name: ";
    string s;
    getline(cin, s);

    while (s.length() > 0 && s[0] == ' ')
    {
        s.erase(0, 1);
    }

    while (s.length() > 0 && s[s.length() - 1] == ' ')
    {
        s.erase(s.length() - 1, 1);
    }

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == s[i - 1] && s[i] == ' ')
        {
            s.erase(i, 1);
        }
        if (s[i] != ' ' && s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
    }
    s[0] = toupper(s[0]);
    cout << s << endl;
    return 0;
}