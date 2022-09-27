/*
// To check if the entered integer is positive or negative or neither positive nor negative

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an integer: ";
    cin>>num;

    //outer if condition
    if (num != 0)
    {
        // inner if condition
        if ((num % 2)==0)
        {
            cout<<"The number is even"<<endl;
        }
        // inner else condition
        else
        {
            cout<<"The number is odd"<<endl;
        }
    }
    // outer else condition
    else {
        cout<<"The number is 0 and its neither even nor odd"<<endl;
    }
    cout<<"This is default statement";
    return 0;
}
*/

/*
// To check which number is greatest out of 3 numbers

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if(a > c)
        {
            cout << "The first number is greatest " << a <<endl;
        }
        else
        {
            cout<< "The third number is greatest "<< c <<endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The second number is greatest "<< b <<endl;
        }
        else
        {
            cout << "The third number is greatest "<< c <<endl;
        }
    }
    return 0;
}
*/

/*
// To check if the student has passed or failed his exams and if marks are 100 then output should be as "Perfect!"

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 50)
    {
        cout<<"Congratulations! You have passed"<<endl;
        if (marks == 100)
        {
            cout<<"Perfect!";
        }
    }
    else
    {
        cout<<"You have failed :("<<endl;
    }
    return 0;
}
*/

// To check if the user is Child or Teenager or Adult

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age > 13)
    {
        if(age >= 18)
        {
            cout<<"You are Adult";
        }
        else
        {
            cout<<"You are Teenager";
        }
    }
    else
    {
        if (age > 0)
        {
            cout<<"You are child";
        }
        else
        {
            cout<<"You entered wrong age";
        }
    }
    return 0;
}
