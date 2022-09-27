// To display 2 numbers

#include <iostream>>
using namespace std;

class ParamA
{
    int b,c;
public:
    ParamA(int b1, int c1)
    {
        b = b1;
        c = c1;
    }
    int getx()
    {
        return b;
    }
    int gety()
    {
        return c;
    }
};

int main()
{
    ParamA p1(10,15);
    cout<<"p1.b = "<<p1.getx()<<"p1.c = "<<p1.gety();
    return 0;
}
