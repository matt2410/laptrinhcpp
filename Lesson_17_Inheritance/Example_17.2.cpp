#include <iostream>
#include <string>
using namespace std;

class vehicles
{
protected:
    string model;
    int velocity;

public:
    vehicles() {}
    vehicles(string model, int velocity)
    {
        this->model = model;
        this->velocity = velocity;
    }

    void information()
    {
        cout << "model " << model << " vanToc " << velocity << endl;
    }

    float time(int miles)
    {
        return (float)miles / velocity;
    }
};

class motorbike : public vehicles
{
public:
    motorbike(string model, int velocity) : vehicles(model, velocity)
    {
    }
    motorbike() {}
    void information()
    {
        cout << "Xe may model " << model << " vanToc " << velocity << endl;
    }
};

class Oto : public vehicles
{
private:
    int thongSoDieuHoa;
    bool isCauTruoc;

public:
    Oto(string model, int velocity, int thongSoDieuHoa, bool isCauTruoc) : vehicles(model, velocity)
    {
        this->thongSoDieuHoa = thongSoDieuHoa;
        this->isCauTruoc = isCauTruoc;
    }
    Oto() {}
    void information()
    {
        string thongTinCau = isCauTruoc ? "Cau truoc" : "Cau sau";
        cout << "o to model " << model << " vanToc " << velocity << " thongSoDieuHoa " << thongSoDieuHoa << " " << thongTinCau << endl;
    }
};

int main()
{
    motorbike xemays[2];
    xemays[0] = motorbike("Honda Wave", 160);
    xemays[1] = motorbike("Ninja 500", 201);

    for (int i = 0; i < 2; i++)
    {
        xemays[i].information();
    }

    Oto otos[3];

    otos[0] = Oto("Mercedes C200", 300, 10000, false);
    otos[1] = Oto("Porsche 911", 330, 50000, false);
    otos[2] = Oto("Vf3", 100, 1000, true);

    for (int i = 0; i < 3; i++)
    {
        otos[i].information();
    }
}