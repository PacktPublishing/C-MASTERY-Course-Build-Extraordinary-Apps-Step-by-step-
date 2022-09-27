#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    int code;
    string name;
    person()
    {
        name = 'user';
        code = 0;
    }
    void getdata()
    {
        cout<<"Enter your name: "<<endl;
        cin>>name;
    }
    void showdata()
    {
        cout<<name<<endl;
    }
};

class account:virtual public person
{
public:
    int pay;
    account()
    {
        pay = 1000;
    }
    void getdata()
    {
        person::getdata();
        cout<<"Enter your pay: "<<endl;
    }
    void showdata()
    {
        person::showdata();
        cout<<pay;
    }
};

class admin:virtual public person
{
public:
    int experience;
    admin()
    {
        experience = 1;
    }
    void getdata()
    {
        person::getdata();
        cout<<"Enter years of experience: "<<endl;
        cin>>experience;
    }
    void showdata()
    {
        person::showdata();
        cout<<experience;
    }
};

class master:public account,public admin
{
public:
    void getdata()
    {
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your code: "<<endl;
        cin>>code;
        cout<<"Enter your pay: "<<endl;
        cin>>pay;
        cout<<"Enter years of experience: "<<endl;
        cin>>experience;

    }
    void showdata()
    {
        cout<<name<<endl;
        cout<<code<<endl;
        cout<<pay<<endl;
        cout<<experience<<endl;
    }
};

int main()
{
    master obj;
    obj.getdata();
    obj.showdata();
    int ch, chq;
    cout<<"Choose any one option 1)Create 2)Update 3)Display: ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
            master obj;
            obj.getdata();
            break;
        }
    case 2:
        {
            cout<<"Which data members do you want to update 1)Name 2)Code 3)Pay 4)Experience: ";
            cin>>chq;
            switch(chq)
            {
            case 1:
                cout<<"Enter name: ";
                cin>>obj.name;
                break;

            case 2:
                cout<<"Enter code: ";
                cin>>obj.code;
                break;

            case 3:
                cout<<"Enter pay: ";
                cin>>obj.pay;
                break;

            case 4:
                cout<<"Enter experience: ";
                cin>>obj.experience;
                break;
            }
            break;
        }
            case 3:
                {
                    obj.showdata();
                    break;
                }
    }
    return 0;
}
