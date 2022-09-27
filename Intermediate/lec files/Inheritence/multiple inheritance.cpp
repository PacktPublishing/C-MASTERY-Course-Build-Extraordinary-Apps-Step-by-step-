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

class fourWheeler
{
public:
    fourWheeler()
    {
        cout<<"This is 4 wheeler vehicle"<<endl;
    }
};

class car:public vehicle, public fourWheeler
{
    // We are keeping this class content empty because we want class car to inherit all public data members/functions from class vehicle and class fourWheeler
};

int main()
{
    car obj;
    return 0;
}
