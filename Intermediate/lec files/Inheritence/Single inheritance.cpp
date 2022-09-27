#include <iostream>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }
};

class car:public vehicle
{
    // We are keeping this class content empty because we want class car to inherit all public data members/functions from class vehicle
};

int main()
{
    car obj;
    return 0;
}
