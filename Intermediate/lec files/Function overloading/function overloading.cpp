/*
#include <iostream>
using namespace std;

class students
{
public:
    void func(int x)
    {
        cout<<"Value of x is: "<<x<<endl;
    }
    void func(int x, int y)
    {
        cout<<"Value of x and y: "<<x<<" "<<y<<endl;
    }
};

int main()
{
    students obj;
    obj.func(7);
    obj.func(3.14);
    obj.func(55, 15);
    return 0;
}


// program to compute absolute value which works for both int and float

#include <iostream>
using namespace std;

float absolute(float var)
{
    if (var < 0.0)

        var = -var;
        return var;

}

int absolute(int var)
{
    if (var < 0)

        var = -var;
        return var;


}

int main()
{
    cout<<"Absolute value of -5 = "<<absolute(-5)<<endl;
    cout<<"Absolute value of 5.5 = "<<absolute(5.5f)<<endl;
    return 0;
}
*/

// Overloading using different number of parameters

#include <iostream>
using namespace std;

void display(int var1, double var2)
{
    cout<<"Integer number: "<<var1;
    cout<<"and double number: "<<var2<<endl;
}

void display(double var)
{
    cout<<"Double number: "<<var<<endl;
}

void display(int var)
{
    cout<<"Integer number: "<<var<<endl;
}

int main()
{
    int a = 5;
    double b = 5.5;

    display(a);
    display(b);

    return 0;
}
