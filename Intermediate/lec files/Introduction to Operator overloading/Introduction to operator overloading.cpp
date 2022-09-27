#include <iostream>
using namespace std;

class Box
{
public:
    double getVolume()
    {
        return length * breadth * height;
    }
    void setLength(double len)
    {
        length = len;
    }
    void setBreadth(double br)
    {
        breadth = br;
    }
    void setHeight(double he)
    {
        height = he;
    }

    Box operator+(const Box& b) // Overloading + operator to add 2 box objects
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
private:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    cout<<"Volume of Box1 is: "<<volume<<endl;

    volume = Box2.getVolume();
    cout<<"Volume of Box2 is: "<<volume<<endl;

    Box3 = Box1 + Box2;

    volume = Box3.getVolume();
    cout<<"Volume of Box3 is: "<<volume<<endl;

    return 0;
}

