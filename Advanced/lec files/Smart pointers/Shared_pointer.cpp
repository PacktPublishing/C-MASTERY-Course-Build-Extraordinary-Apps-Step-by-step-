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
    A obj(300);
    shared_ptr<A> myPtr1 = make_shared<A>(obj);
    cout<<"Current reference count of myPtr1 = "<<myPtr1.use_count()<<endl;
    shared_ptr<A> myPtr2 = myPtr1;

    cout<<"Current reference count of myPtr1 = "<<myPtr1.use_count()<<endl;
    cout<<"Current reference count of myPtr2 = "<<myPtr2.use_count()<<endl;

    cout<<"After dereferencing myPtr1: "<<myPtr1->a<<endl;
    cout<<"After dereferencing myPtr2: "<<myPtr2->a<<endl;

    cout<<"Freeing the pointers..."<<endl;
    myPtr1.reset();
    cout<<"Freed my pointer 1"<<endl;
    cout<<"Current reference count of my pointer 1 = "<<myPtr1.use_count()<<endl;

    cout<<"Current reference count of my pointer 2 = "<<myPtr2.use_count()<<endl;
    myPtr2.reset();

    cout<<"Freed my pointer 2"<<endl;
    cout<<"Current reference count of my pointer 1 = "<<myPtr1.use_count()<<endl;
    cout<<"Current reference count of my pointer 2 = "<<myPtr2.use_count()<<endl;

    return 0;
}
