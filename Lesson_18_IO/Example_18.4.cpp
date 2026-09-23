#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name;
    float gpa;
    ofstream outputFile ("18.4.txt", ios::app);
    do
    {
        cout << "Enter your fullname: ";
        getline(cin, name);
        if (name != "stop")
        {
            cout << "Enter the student's score: ";
            cin >> gpa;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            outputFile << name + ", " + to_string(gpa) + '\n';
        }
    } while (name != "stop");
    outputFile.close();
    return 0;
}