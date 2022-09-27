/*
#include <iostream>
using namespace std;

class Box
{
    double width;

public:
    double length;
    friend void printwidth(Box box);
    void setwidth(double wid);
};
void Box::setwidth(double wid)
{
    width = wid;
}
void printwidth(Box box)
{
    cout<<"width of box: "<<box.width<<endl;
}

int main()
{
    Box box;
    box.setwidth(10);
    printwidth(box);
    return 0;
}


// To add members of 2 different classes

#include <iostream>
using namespace std;

class ClassB; // forward declaration

class ClassA
{
    int numA;
    friend int add(ClassA, ClassB);
public:
    ClassA():numA(12) {}

};

class ClassB
{
public:
    ClassB(): numB(1) {}

private:
    int numB;
    friend int add(ClassA, ClassB);
};

int add(ClassA obj1, ClassB obj2)
{
    return (obj1.numA + obj2.numB);
}

int main()
{
    ClassA obj1;
    ClassB obj2;
    cout<<"Sum: "<<add(obj1, obj2);
    return 0;
}
*/

// To demonstrate the working of friend class

#include <iostream>
using namespace std;

class ClassB; // forward declaration

class ClassA
{
    int numA;
    friend class ClassB;
public:
    ClassA(): numA(12)
    {

    }
};

class ClassB
{
    int numB;
public:
    ClassB():numB(1)
    {

    }
    int add()
    {
        ClassA obj1;
        return obj1.numA + numB;
    }
};

int main()
{
    ClassB obj2;
    cout<<"Sum: "<<obj2.add();
    return 0;
}
