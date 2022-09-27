#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;
public:
    Time()
    {
        hours = 0;
        minutes =  0;
    }
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void displayTime()
    {
        cout<<"H: "<<hours<<"M: "<<minutes<<endl;
    }
    Time operator++ ()
    {
        ++minutes;
        if(minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
    Time operator++ ( int )
    {
        Time T(hours, minutes);

        ++minutes;

        if(minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return T;
    }
};

int main()
{
    Time T1(11, 59);
    Time T2(10, 40);

    ++T1;
    T1.displayTime();
    ++T1;
    T1.displayTime();

    T2++;
    T2.displayTime();
    T2++;
    T2.displayTime();

    return 0;
}
