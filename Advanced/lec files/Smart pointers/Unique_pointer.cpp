#include <iostream>
#include <memory>
using namespace std;

class A
{
public:
    int a;

    A()
    {
        cout<<"This is a default constructor"<<endl;\
        a = 10;
    }

    A(int value = 100)
    {
        cout<<"This is a parametrized constructor"<<endl;
        a = value;
    }
};

int main()
{
    A obj(200);
    unique_ptr<A> my_ptr_1 = make_unique<A>(obj);
    unique_ptr<A> my_ptr_2(new A(300));

    cout<<"The value of my 1st pointer is: "<<my_ptr_1->a<<endl;
    cout<<"The value of my 2nd pointer is: "<<my_ptr_2->a<<endl;

    cout<<"Freeing the pointers...."<<endl;
    my_ptr_1.reset();
    my_ptr_2.reset();

    return 0;

}
