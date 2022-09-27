// To display 2 numbers

#include <iostream>>
using namespace std;

class point
{
    int x,y;
public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    point(const point & p2) // copy constructor
    {
        x = p2.x;
        y = p2.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};

int main()
{
    point p1(10,15); // normal constructor is called here
    point p2 = p1; // copy constructor is called

    cout<<"p1.x = "<<p1.getx()<<"p1.y = "<<p1.gety()<<endl;
    cout<<"p2.x = "<<p2.getx()<<"p2.y = "<<p2.gety()<<endl;

    return 0;
}
