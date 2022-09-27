/*
// Area of circle using public access modifier

#include <iostream>
using namespace std;

class circle
{
public:
    double radius;
    double calculate_area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    circle obj;
    obj.radius = 5.5;

    cout<<"Radius of the circle is: "<<obj.radius<<"\n";
    cout<<"Area is: "<<obj.calculate_area();
    return 0;
}

// Area of circle using private access modifier

#include <iostream>
using namespace std;

class circle
{
    private:
    double radius;

    public:
        double compute_area(double r)
        {
            double area;
            radius = r;
            area = 3.14 * radius * radius;
            cout<<"Area is: "<<area;
        }
};

int main()
{
    circle obj;

    obj.compute_area(1.5);
    return 0;
}
*/

// To represent bank account having variables like name of depositor, Account number, type of account
// balance, function to assign initial values, to deposit an amount, to withdraw and display updated balance
// to display name and balance of the account holder this program is handling max of 10 customers

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Bank
{
    char name[50];
    char acc_type;
    long int acc_no;
    double bal;

public:
    void getvalue();
    double dep();
    void wid();
    void display();
};

void Bank::getvalue()
{
    cout<<"Enter your name: "<<endl;
    cin.getline(name, 50);
    cout<<"Enter account type Savings(s)/Current(c): "<<endl;
    cin>>acc_type;
    acc_no = rand();
    cout<<"Your account number is: "<<acc_no;
    if (acc_type == 's')
    {
        bal = 10;
    }
    else
    {
        bal = 100;
    }
}

void Bank::display()
{
    cout<<""<<name;
    cout<<"\n Your balance is: "<<bal;
}

double Bank::dep()
{
    int temp;
    cout<<"Enter the amount you want to deposit: "<<endl;
    cin>>temp;
    bal = bal+temp;
    cout<<"Your updated balance is: "<<bal;
}

void Bank::wid()
{
    int temp;
    cout<<"Enter the amount you want to withdraw: "<<endl;
    cin>>temp;
    if(temp < bal)
    {
        bal = bal - temp;
    }
    else
    {
        cout<<"Insufficient balance!";
    }
    cout<<"The updated balance is: "<<bal;
}

int main()
{
    int ch;
    Bank b1[10];
    for(int i = 1; i <= 10; i++)
    {
        b1[i].getvalue();
        cout<<"\n Enter your choice \n 1.Deposit \n 2.Withdraw \n 3.Display balance: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            b1[i].dep();
            break;

        case 2:
            b1[i].wid();
            break;

        case 3:
            b1[i].display();
            break;

        default:
            cout<<"Invalid input!";
        }
    }
    return 0;
}
