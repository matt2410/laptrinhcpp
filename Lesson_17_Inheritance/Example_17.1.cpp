#include <iostream>
using namespace std;

class human
{

protected:
    string name;
    int age;

public:
    human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void identification()
    {
        cout << "Full name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class employees : public human
{
private:
    int monthlyIncomeInUSD;

public:

    employees(string name, int age, int monthlyIncomeInUSD) : human(name, age)
    {
        cout << "Identification: employee" << endl;
        this->name = name;
        this->age = age;
        this->monthlyIncomeInUSD = monthlyIncomeInUSD;
    }
    void identification()
    {
        cout << "Full name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Monthly income (in USD): " << monthlyIncomeInUSD << endl;
    }
    int increment()
    {
        cout << "Increment: ";
        if (age > 30)
        {
            return 0.3 * monthlyIncomeInUSD;
        }
        return 0;
    }
};

int main ()
{
    employees julis("Julian Louis", 24, 7000);
    julis.identification();
    cout << julis.increment();
    return 0;
}