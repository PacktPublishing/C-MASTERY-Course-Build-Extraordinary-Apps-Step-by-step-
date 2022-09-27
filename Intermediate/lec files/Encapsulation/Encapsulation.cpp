#include <iostream>
using namespace std;

class A
{
    int a,b;
public:
    void display()
    {
        cout<<"Enter some values: ";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
    }
    void add()
    {
        cout<<"Enter some values: ";
        cin>>a>>b;
        cout<<"Sum = "<<a+b<<endl;
    }
};

int main()
{
    A obj;
    obj.display();
    obj.add();
    return 0;
}
