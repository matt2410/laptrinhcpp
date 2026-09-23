#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class students
{
    private:
        string fullName;
        float score;
    public:
        students(string fullName, float score)
        {
            this -> fullName = fullName;
            this -> score = score;
        }
        float getScore()
        {
            return score;
        }
        string getFullName()
        {
            return fullName;
        }
};

int main()
{
    string name;
    int count = 0;
    float sum;
    sum = 0.0;
    ifstream inputFile("18.5.txt");
    if (!inputFile.is_open())
    {
        cout << "Output file is not found" << endl;
        return 0;
    }
    while (getline(inputFile, name))
    {
        students st1(name.substr(0, name.find(',')), stof(name.substr(name.find(',') + 1)));
        cout << st1.getFullName() << endl;
        cout << st1.getScore() << endl;
        sum += st1.getScore();
        count ++;
    }
    cout << "The average score is: " << sum / count;
    inputFile.close();
    return 0;
}