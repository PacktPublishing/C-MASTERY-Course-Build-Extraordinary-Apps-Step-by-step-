/*
// to find cost of an iphone and number of physical sim card slots

#include <iostream>
using namespace std;

class Phone
{
public:
    double cost;
    int slots;
};

int main()
{
    Phone obj1;
    Phone obj2;

    obj1.cost = 1000.0;
    obj1.slots = 1;

    obj2.cost = 1100.0;
    obj2.slots = 1;

    cout<<"Cost of Iphone 12 is: "<<obj1.cost<<endl;
    cout<<"Cost of Iphone 12 pro max is: "<<obj2.cost<<endl;

    cout<<"Number of physical sim slots in Iphone 12 are: "<<obj1.slots<<endl;
    cout<<"Number of physical sim slots in Iphone 12 pro max are: "<<obj2.slots<<endl;

    return 0;
}
*/

// To find area and volume of a room

#include <iostream>
using namespace std;

class Room
{
public:
    double length, breadth, height;

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room room1;

    room1.length;
    room1.breadth;
    room1.height;

    cout<<"Enter length, breadth, height respectively: "<<endl;
    cin>>room1.length>>room1.breadth>>room1.height;

    cout<<"Area is: "<<room1.calculateArea()<<endl;
    cout<<"Volume is: "<<room1.calculateVolume()<<endl;
}
