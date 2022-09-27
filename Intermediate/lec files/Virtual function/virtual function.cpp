/*
// To demonstrate the working of virtual function

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout<<"Base function"<<endl;
    }
};

class Derived: public Base
{
public:
    void print()
    {
        cout<<"Derived function"<<endl;
    }
};

int main()
{
    Derived obj;
    Base * base1 = &obj; // pointer of Base type points to obj

    base1 ->print(); // calls member function of derived class

    return 0;

}
*/

#include <iostream>
#include <string>
using namespace std;

class Animal
{
    string type;
public:
    Animal():type("Animal")
    {

    }
    virtual string getType()
        {
            return type;
        }
};

class Dog:public Animal
{
    string type;
public:
    Dog():type("Dog")
    {

    }
    string getType() override
    {
        return type;
    }
};

class Cat: public Animal
{
    string type;
public:
    Cat():type("Cat")
    {

    }
    string getType() override
    {
        return type;
    }
};

void print(Animal * ani)
{
    cout<<"Animal: "<<ani ->getType()<<endl;
}

int main()
{
    Animal* animal1 = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);

    return 0;

}
