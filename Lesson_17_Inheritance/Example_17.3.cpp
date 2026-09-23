#include <iostream>
#include <string>
using namespace std;

/*
    OOP means Object-Oriented Programming.
    We put data and functions that work on that data inside a class.
    An object is a real item created from a class.
    Basic syntax: class ClassName { data; functions; };
*/

// PARENT CLASS: Character contains features shared by every character.
class Character
{
private:
    // ATTRIBUTES describe an object. Private data prevents unsafe direct changes.
    string name;
    string role;
    int health;
    int attack;
    int defence;

public:
        // CONSTRUCTOR runs automatically when an object is created.
        // It gives the object's attributes valid starting values.
        // A MEMBER VARIABLE belongs to each object, for example this object's name.
        // A CONSTRUCTOR PARAMETER temporarily receives a value from the caller.
        // A MEMBER VALUE is the actual data currently stored in that member.
        // Example: "Ton Tzu" is passed to characterName, then stored in name.
        // Basic syntax: ClassName(parameters) : member(value) { }
    Character(string characterName, string characterRole, int characterHealth,
              int characterAttack, int characterDefence)
                // Each left side is a member; each right side supplies its starting value.
                // name(characterName) means: initialize this object's name member
                // with the value currently held by the characterName parameter.
                // This happens before the constructor body { } starts.
                : name(characterName), role(characterRole), health(characterHealth),
                    attack(characterAttack), defence(characterDefence)
    {
    }

    // GETTERS read private data without allowing direct access.
    // Basic syntax: Type getValue() const { return value; }
    string getName() const { return name; }
    string getRole() const { return role; }
    int getHealth() const { return health; }
    int getAttack() const { return attack; }
    int getDefence() const { return defence; }

    // SETTERS change private data in a controlled way.
    // They can validate a value before storing it.
    // Basic syntax: void setValue(Type newValue) { value = newValue; }
    // In const string&, & means "reference": use the original string without copying it.
    // const means this setter promises not to change the input string.
    // Together, const string& safely reads a string efficiently.
    void setName(const string& newName) { name = newName; }
    void setRole(const string& newRole) { role = newRole; }

    void setHealth(int newHealth)
    {
        if (newHealth >= 0 && newHealth <= 100)
        {
            health = newHealth;
        }
    }

    void setAttack(int newAttack)
    {
        if (newAttack >= 0 && newAttack <= 100)
        {
            attack = newAttack;
        }
    }

    void setDefence(int newDefence)
    {
        if (newDefence >= 0 && newDefence <= 100)
        {
            defence = newDefence;
        }
    }

    // METHOD is a function that belongs to a class.
    // Methods make objects perform actions with their own data.
    void showInformation() const
    {
        cout << "Character: " << getName() << endl;
        cout << "Role: " << getRole() << endl;
        cout << "-------- Statistics --------" << endl;
        cout << "Health: " << getHealth() << endl;
        cout << "Attack: " << getAttack() << endl;
        cout << "Defence: " << getDefence() << endl;
    }

    // VIRTUAL FUNCTION: allows a child class to provide its own version of a method.
    // Without virtual, a parent-pointer call uses the parent's method.
    // With virtual, C++ checks the real object type at runtime.
    // Here, a Character pointer pointing to Infantry calls Infantry::applyDebuff().
    // Basic syntax: virtual returnType method() { parent behavior; }
    virtual void applyDebuff(int debuff)
    {
        setHealth(getHealth() - debuff);
        cout << "Normal debuff applied." << endl;
    }

    // A destructor runs when an object is destroyed.
    // virtual makes cleanup safe when a child object is handled by a parent pointer.
    // = default asks C++ to generate the normal destructor automatically.
    virtual ~Character() = default;
};

// CHILD CLASS: Infantry inherits accessible behavior from Character.
// Basic syntax: class Child : public Parent { };
class Infantry : public Character
{
private:
    int rage;
    int rageRequirement;

public:
    // This child constructor calls the parent constructor first.
    Infantry(string characterName, string characterRole, int characterHealth,
             int characterAttack, int characterDefence, int startingRage)
        : Character(characterName, characterRole, characterHealth,
                    characterAttack, characterDefence),
          rage(startingRage), rageRequirement(900)
    {
    }

    int getRage() const { return rage; } // Getter for the child's private attribute.

    void setRage(int newRage) // Setter controls changes to rage.
    {
        if (newRage >= 0)
        {
            rage = newRage;
        }
    }

    // METHOD OVERRIDING: the child replaces a virtual parent method.
    // Use it when the child needs different behavior.
    // Basic syntax: void method() override { child behavior; }
    void applyDebuff(int debuff) override
    {
        // Divide the debuff by 1.5, then convert the decimal result to an int.
        // static_cast<int>(value) is the clear C++ syntax for a type conversion.
        int reducedDebuff = static_cast<int>(debuff / 1.5);
        setHealth(getHealth() - reducedDebuff);
        cout << "Infantry's reduced debuff applied." << endl;
    }

    void useActiveSkill()
    {
        if (getRage() >= rageRequirement)
        {
            cout << "Active skill used: Smite damage factor = 3000." << endl;
            setRage(getRage() - rageRequirement);
        }
        else
        {
            cout << "Not enough rage to use the active skill." << endl;
        }
    }
};

int main()
{
    // OBJECT: tontzu is an Infantry object created with a constructor.
    Infantry tontzu("Ton Tzu", "Open field commander", 100, 30, 30, 1000);

    cout << "Before the attack:" << endl;
    tontzu.showInformation();
    tontzu.useActiveSkill();

    // POINTER stores another object's memory address.
    // &tontzu means "the address of tontzu"; it does not copy the object.
    // The * in Character* means characterPointer can store a Character address.
    // Because Infantry is a Character, its address can be stored in this pointer.
    // Basic syntax: Type* pointerName = &object;
    Character* characterPointer = &tontzu;

    int receivedDebuff;
    cout << "\nHealth debuff: ";
    cin >> receivedDebuff;

    // -> means "access a member through a pointer".
    // characterPointer->applyDebuff(...) is the same as (*characterPointer).applyDebuff(...).
    // The virtual method selects Infantry's overridden version at runtime.
    characterPointer->applyDebuff(receivedDebuff);

    cout << "Health after the attack: "
         << characterPointer->getHealth() << endl;

    // Setter example: change the role through a controlled public method.
    tontzu.setRole("Experienced open field commander");
    cout << "Updated role: " << tontzu.getRole() << endl;

    return 0;
}