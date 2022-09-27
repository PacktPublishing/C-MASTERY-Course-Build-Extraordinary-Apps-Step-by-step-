/*
// Enter and display student details

#include <iostream>
using namespace std;

class student
{
public:
    char name[30], clas[10];
    int rol, age;

    void enter()
    {
        cout<<"Enter student Name: "<<endl;
        cin.getline(name, 30);
        cout<<"Enter student Age: "<<endl;
        cin>>age;
        cout<<"Enter student roll number: "<<endl;
        cin>>rol;
        cout<<"Enter student class: "<<endl;
        cin.getline(clas, 10);
    }

    void display()
    {
        cout<<"\n Age \t Name \t Roll number \t class";
        cout<<"\n"<<age<<"\t"<<name<<"\t"<<rol<<"\t"<<clas;
    }
};

int main()
{
    student obj1;
    obj1.enter();
    obj1.display();
    return 0;
}


// create class called DB to convert feet to inches

#include <iostream>
using namespace std;

class DB
{
    double ft, inch;
public:
    double convert();
    void display();
};

double DB::convert()
{
    cout<<"Enter the value in feet: ";
    cin>>ft;
    inch = ft * 12;
}

void DB::display()
{
    cout<<"The value in inches is: "<<inch;
}

int main()
{
    DB obj1;
    obj1.convert();
    obj1.display();
    return 0;
}
*/

// Enter and display student details (one function outside class and one function inside class)

#include <iostream>
#include <string>
using namespace std;

class students
{
public:
    string name;
    int rol_no;

    void printName(); // not defined inside class

    void printRoll() // defined inside class
    {
        cout<<"student roll number is: "<<rol_no;
    }
};

void students::printName() // defining outside class
{
    cout<<"Student name is: "<<name;
}
int main()
{
    students obj1;
    obj1.name = "Prerak";
    obj1.rol_no = 4;

    obj1.printName();
    cout<<endl;

    obj1.printRoll();
    return 0;
}
