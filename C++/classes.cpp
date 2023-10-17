#include <iostream>

using namespace std;

class Dog {

    // Accessible outside of class methods
    public:
        Dog (string name, int age);
        void introduce (void);
        void bark (void);

    // Only accessible inside class methods
    private:
        string name;
        int age;

};

// Constructor Method
Dog::Dog (string _name, int _age)
{
    name = _name;
    age = _age;
}

void Dog::introduce (void)
{
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
}

void Dog::bark (void)
{
    cout << "Woof" << endl;
}

int main (void)
{
    Dog dog("Henry", 6);

    dog.introduce();
    dog.bark();
    dog.bark();
}
