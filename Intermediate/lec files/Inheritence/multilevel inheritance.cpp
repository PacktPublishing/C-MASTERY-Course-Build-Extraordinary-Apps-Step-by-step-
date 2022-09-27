#include <iostream>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout<<"This is vehicle"<<endl;
    }
};

class fourWheeler:public vehicle
{
public:
    fourWheeler()
    {
        cout<<"Objects with 4 wheeler are vehicles"<<endl;
    }
};

class car:public fourWheeler
{
   public:
    car()
    {
        cout<<"car has 4 wheels"<<endl;
    }
};

int main()
{
    car obj;
    return 0;
}
