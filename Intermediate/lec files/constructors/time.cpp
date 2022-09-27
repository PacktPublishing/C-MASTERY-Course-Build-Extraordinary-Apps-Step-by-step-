#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    int hr, mins ,sec;
public:
    Time() // default constructor
    {
        hr = 0;
        mins = 0;
        sec = 0;
    }
    Time(int a, int b ,int c)
    {
        hr = a;
        mins = b;
        sec = c;
    }
    void add(Time x, Time y)
    {
        hr = x.hr + y.hr;
        mins = x.mins + y.mins;
        sec = x.sec + y.sec;
    }
    void display()
    {
        cout<<std::setw(2)<<std::setfill('0')<<hr<<":"<<mins<<":"<<sec;
    }
};
 int main()
 {
     int h, m, s;
     cout<<"Enter Time in HH/MM/SS format: ";
     cin>>h>>m>>s;
     Time obj1(h,m,s);
     cout<<"Enter Time in HH/MM/SS format: ";
     cin>>h>>m>>s;
     Time obj2(h,m,s);
     Time obj3;
     obj3.add(obj1, obj2);
     obj3.display();
     return 0;
 }
