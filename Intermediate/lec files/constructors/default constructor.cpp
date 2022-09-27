// To display 2 numbers

#include <iostream>
using namespace std;

class DemoDC
{
    int num1, num2;
public:
    DemoDC()
    {
        num1 = 10;
        num2 = 20;
    }

    void display()
    {
        cout<<"num1 = "<<num1<<endl;
        cout<<"num2 = "<<num2<<endl;
    }
};

int main()
{
    DemoDC obj1;
    obj1.display();
    return 0;
}
