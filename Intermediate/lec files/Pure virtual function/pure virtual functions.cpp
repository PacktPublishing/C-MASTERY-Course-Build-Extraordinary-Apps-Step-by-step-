// To demonstrate how pure virtual functions work

#include <iostream>
using namespace std;

class Base
{
    int x;
public:
    virtual void fun()=0; // pure virtual function since 0 is declared
    int getx()
    {
        return 0;
    }
};

class Derived:public Base
{
    int y;
public:
    void fun()
    {
        cout<<"Function fun() is called";
    }
};

int main()
{
    Derived d;
    d.fun();
    return 0;
}
