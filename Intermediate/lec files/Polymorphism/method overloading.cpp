#include <iostream>
using namespace std;

class A
{
    float a,b;
public:

    void display(int x, int y)
    {
        a = x;
        b = y;
        cout<<a<<" "<<b<<endl;
    }
    void display(double x, double y)
    {
        a = x;
        b = y;
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    A obj;
    obj.display(50.5,100.1);
    return 0;
}
