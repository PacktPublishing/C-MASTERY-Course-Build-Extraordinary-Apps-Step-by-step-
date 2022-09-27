#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void operator = (const Distance &D)
    {
        feet = D.feet;
        inches = D.inches;
    }
    void displayDistance()
    {
        cout<<"F: "<<feet<<"I: "<<inches<<endl;
    }
};

int main()
{
    Distance D1(11, 10);
    Distance D2(5, 11);

    cout<<"First Distance: ";
    D1.displayDistance();
    cout<<"Second Distance: ";
    D2.displayDistance();

    return 0;
}
