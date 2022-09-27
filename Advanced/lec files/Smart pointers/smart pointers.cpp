// To demonstrate how smart pointers work

/*
#include <iostream>
using namespace std;

class SmartPtr
{
    int* ptr;
public:
    SmartPtr(int* p = NULL)
    {
        ptr = p;
    }

    ~SmartPtr()
    {
        delete (ptr);
    }

    int& operator*()
    {
        return *ptr;
    }
};

int main()
{
    SmartPtr ptr(new int());
    *ptr = 20;
    cout<< *ptr;

    return 0;
}


// To demonstrate how unique pointer work

#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
    int length, breadth;
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout<< P1->area()<<endl;

    unique_ptr<Rectangle> P2;
    P2 = move(P1);

    cout<<P2->area()<<endl;

    return 0;
}


// 2nd example to demonstrate working of unique_ptr

#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    int a;
    MyClass()
    {
        cout<<"Default constructor"<<endl;
        a = 10;
    }
    MyClass(int value = 100)
    {
        cout<<"Parametrized constructor"<<endl;
        a = value;
    }
};

int main()
{
    MyClass my_obj(250);

    unique_ptr<MyClass> my_ptr_1 = make_unique<MyClass> (my_obj);
    unique_ptr<MyClass> my_ptr_2(new MyClass(500));

    cout<<"Value of a (my_ptr_1): "<<my_ptr_1 ->a <<endl;
    cout<<"Value of a (my_ptr_2): "<<my_ptr_2 ->a <<endl;

    cout<<"Freeing the pointers....."<<endl;
    my_ptr_1.reset();
    my_ptr_2.reset();
    return 0;
}


// To demonstrate how shared_ptr works

#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    int a;
    MyClass()
    {
        cout<<"Default Constructor\n";
        a = 10;
    }
    MyClass(int value = 100)
    {
        cout<<"Parametrized constructor\n";
        a = value;
    }
};

int main()
{
    MyClass my_obj(250);

    shared_ptr<MyClass> my_ptr_1 = make_shared<MyClass> (my_obj);
    cout<<"Current Reference count of my_ptr_1 = " <<my_ptr_1.use_count()<<endl;
    shared_ptr<MyClass> my_ptr_2 = my_ptr_1;

    cout<<"Current Reference count of my_ptr_1 = "<<my_ptr_1.use_count()<<endl;
    cout<<"Current Reference count of my_ptr_2 = "<<my_ptr_2.use_count()<<endl;

    cout<<"Value of a "<<my_ptr_1 ->a<<endl;
    cout<<"Value of a "<<my_ptr_2 ->a<<endl;

    cout<<"Freeing the pointers.....\n";
    my_ptr_1.reset();
    cout<<"Freed my_ptr_1\n";
    cout<<"Current Reference count of my_ptr_1 = "<<my_ptr_1.use_count()<<endl;
    cout<<"Current Reference count of my_ptr_2 = "<<my_ptr_2.use_count()<<endl;
    my_ptr_2.reset();
    cout<<"Freed my_ptr_2\n";
    cout<<"Current Reference count of my_ptr_1 = "<<my_ptr_1.use_count()<<endl;
    cout<<"Current Reference count of my_ptr_2 = "<<my_ptr_2.use_count()<<endl;
    return 0;
}


// 2nd example to demonstrate how shared_ptr work

#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
    int length, width;
public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int area()
    {
        return length * width;
    }
};

int main()
{
    shared_ptr<Rectangle> P1(new Rectangle(10,5));
    cout<<P1 ->area()<<endl;

    shared_ptr<Rectangle> P2;
    P2 = P1;

    cout<<P2 ->area()<<endl;

    cout<< P1 ->area()<<endl;

    cout<<P1.use_count()<<endl;
    return 0;
}
*/

// To demonstrate the working of weak_ptr

#include <iostream>
#include <memory>
using namespace std;

class B;

class A
{
public:
    int a;
    shared_ptr<B> ptr;
    A(int value = 200)
    {
        a = value;
    }
    ~A()
    {
        cout<<"Destructor for A"<<endl;
    }
};

class B
{
public:
    int a;
    shared_ptr<A> ptr;
    B(int value = 200)
    {
        a = value;
    }
    ~B()
    {
        cout<<"Destructor for B"<<endl;
    }
};

int main()
{
    shared_ptr<A> ptr_a = make_shared<A>(750);
    shared_ptr<B> ptr_b = make_shared<B>(750);

    ptr_a ->ptr = ptr_b;
    ptr_b ->ptr = ptr_a;

    return 0;
}
