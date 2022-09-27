#include <iostream>
using namespace std;

class A
{
public:
   virtual void display()
    {
        cout<<"This is a parent class";
    }
};

class B:public A
{
public:
    void display()
    {
        cout<<"This is a child class";
    }
};

int main()
{
    A *p;
    B obj;
    p = &obj;
    p->display();
    return 0;
}
