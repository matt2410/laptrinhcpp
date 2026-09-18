#include <iostream>
#include <string>
using namespace std;

class character
{
    protected:
        string name;
        string role;
        int health;
        int attack;
        int defence;

    public:
        character () {}
        character (string name, string role, int health, int attack, int defence)
        {
            this -> name = name;
            this -> role = role;
            this -> health = health;
            this -> attack = attack;
            this -> defence = defence;
        }
        void information ()
        {
            cout << "Character: " << name << endl;
            cout << "Role: " << role << endl;
            cout << "--------Statistics--------" << endl;
            cout << "Health %: " << health << endl;
            cout << "Attack %: " << attack << endl;
            cout << "Defence %: " << defence << endl;
        }

    virtual void debuffedHealth (int receivedHealthDebuff)
    {
        health = health - receivedHealthDebuff;
    };
};

class infantry : public character
{
    private:
        int rage;
        int rageRequirement = 900;

    public:
        infantry () {}
        infantry (string name, string role, int health, int attack, int defence, int rage) : character(name, role, health, attack, defence)
        {
            cout << "Combat arm: Infantry" << endl;
            this -> rage = rage;
        }
        void information ()
        {
            cout << "Character: " << name << endl;
            cout << "Role: " << role << endl;
            cout << "--------Statistics--------" << endl;
            cout << "Health %: " << health << endl;
            cout << "Attack %: " << attack << endl;
            cout << "Defence %: " << defence << endl;
            cout << "Rage requirement for active skill: " << rageRequirement << endl;
            cout << endl;
        }
        void currentStat ()
        {
            cout << "--------Current Statistics--------" << endl;
            int currentRage;
            cout << "Current rage: ";
            cin >> currentRage;
            int *b = &rageRequirement;
            if (currentRage >= *b)
            {
                cout << "Smite Damage Factor: 3000" << endl;
                cout << "Damage Percentage Buff: 20%" << endl;
            }
            else
            {
                cout << "Not enough rage to use the active skill." << endl;
            }
        }
        void debuffedHealth(int receivedHealthDebuff) override
        {
            float reference = receivedHealthDebuff / 1.5;
            float currentHealth = health - reference;
            cout << "Health after debuff: " << currentHealth << endl;
        }
};

int main ()
{
    infantry tontzu ("Ton Tzu", "Open field commander", 20, 30, 30, 1000);
    tontzu.information();
    tontzu.currentStat();
    // character &characterReference = tontzu;  
    
    int receivedHealthDebuff;
    cout << "Health Debuff: ";
    cin >> receivedHealthDebuff;
    tontzu.debuffedHealth (receivedHealthDebuff);
    return 0;
}