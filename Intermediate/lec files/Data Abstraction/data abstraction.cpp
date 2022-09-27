/*
// To demonstrate how abstraction works

#include <iostream>
using namespace std;

class implementAbstraction
{
    int a, b;
public:
    void setValue(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.setValue(10, 20);
    obj.display();
    return 0;
}
*/

#include <iostream>
using namespace std;

class Adder
{
    int total;
public:
    Adder(int i = 0)
    {
        total = i;
    }

    void addNum(int number)
    {
        total += number;
    }
    int getTotal()
    {
        return total;
    }
};

int main()
{
    Adder obj;
    obj.addNum(10);
    obj.addNum(20);
    obj.addNum(30);

    cout<<"Total "<<obj.getTotal()<<endl;
    return 0;
}
