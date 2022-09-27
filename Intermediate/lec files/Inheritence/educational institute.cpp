#include <iostream>
#include <memory>
using namespace std;

class staff
{
public:
    int code;
    string name;
    void getdata()
    {
        cout<<"Please enter your code: "<<endl;
        cin>>code;
        cout<<"Please enter your name: "<<endl;
        cin>>name;
    }
    void display()
    {
        cout<<"Your code and name is: "<<code<<" "<<name<<endl;
    }
};

class teacher:public staff
{
    public:
    string subject;
    int publication;
    void getdata()
    {
        staff::getdata();
        cout<<"Enter your subject name: "<<endl;
        cin>>subject;
        cout<<"Please enter your publication number: "<<endl;
        cin>>publication;
    }
    void display()
    {
        staff::display();
        cout<<"Your subject and number of publication is "<<subject<<" "<<publication<<endl;
    }
};

class typist:public staff
{
    public:
    double speed;
    void getdata()
    {
        staff::getdata();
        cout<<"Enter speed (words per minute): "<<endl;
        cin>>speed;

    }
    void display()
    {
        staff::display();
        cout<<"Your speed is "<<speed<<endl;
    }
};

class officer:public staff
{
    char grade;
    public:
    void getdata()
    {
        staff::getdata();
        cout<<"Enter your grade: "<<endl;
        cin>>grade;

    }
    void display()
    {
        staff::display();
        cout<<"Your grade is "<<grade<<endl;
    }
};

class regular:virtual public typist
{
    public:
        double salary;
    void getdata()
    {
        typist::getdata();
        cout<<"Enter salary: "<<endl;
        cin>>salary;

    }
    void display()
    {
        typist::display();
        cout<<"Your salary is "<<salary<<endl;
    }
};

class casual:virtual public typist
{
    public:
        double daily_wages;
    void getdata()
    {
        staff::getdata();
        typist::getdata();
        cout<<"Enter your daily wage: "<<endl;
        cin>>daily_wages;

    }
};

int main()
{
    staff obj1;
    teacher obj2;
    typist obj3;
    officer obj4;
    regular obj5;
    casual obj6;
    int ch;
    char chq;
    cout<<"Select any one option 1)Typist 2)Officer or 3)Teacher: "<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
            cout<<"(r)Regular or (c)Casual: "<<endl;
            cin>>chq;
            if(chq == 'r' || chq == 'R')
            {
                obj5.getdata();
                obj5.display();
            }
            else
            {
                obj6.getdata();
                obj6.display();
            }
            break;
        }
    case 2:
        {
            obj4.getdata();
            obj4.display();
        }
        break;

    case 3:
        {
            obj2.getdata();
            obj2.display();
        }
        break;
    }
    return 0;
}
