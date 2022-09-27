#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout<<"Print base class"<<endl;
    }

    void show()
    {
        cout<<"Show base class"<<endl;
    }
};

class derived:public Base
{
public:
    void print()
    {
        cout<<"Print derived class"<<endl;
    }
    void show()
    {
        cout<<"Show base class"<<endl;
    }
};

int main()
{
    Base *bptr;
    derived d;
    bptr = &d;

    bptr-> print();
    bptr-> show();
    return 0;
}
