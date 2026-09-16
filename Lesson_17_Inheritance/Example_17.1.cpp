#include <iostream>
using namespace std;

class animal
{
private:
    int nhipTim;
    int luongMau;

public:
    void run ()
    {
        cout << "con cho dang chay" << endl;
    }
    void sound()
    {
        cout << "go go" << endl;
    }
    void ngui()
    {
        cout << "Ngui" << endl;
    }
};

class dog
{
private:
    int nhipTim;
    int luongMau;
    int dooNhayKhuuGiac;

public:
    void run ()
    {
        cout << "con cho dang chay" << endl;
    }
    void sound()
    {
        cout << "go go" << endl;
    }
    void ngui()
    {
        cout << "Ngui" << endl;
    }
};

int main ()
{
    return 0;
}