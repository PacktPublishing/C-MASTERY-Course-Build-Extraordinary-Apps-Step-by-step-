#include <iostream>
using namespace std;

class a
{
public:
    int a1;

};

class b:public a
{
public:
    int b1;
};

class c:public a
{
public:
    int c1;
};

class d:public b, public c
{
public:
    int d1;
};

int main()
{
    d obj;
    obj.b::a1=10;
    obj.c::a1=100;
    obj.b1 = 20;
    obj.c1 = 20;
    obj.d1 = 40;

    cout<<"a1 from class b is "<<obj.b::a1<<endl;
    cout<<"a1 from class c is "<<obj.c::a1<<endl;

    cout<<"b1: "<<obj.b1;
    cout<<"c1: "<<obj.c1;
    cout<<"d1: "<<obj.d1;

    return 0;
}
