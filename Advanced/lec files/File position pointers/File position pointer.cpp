// seekg() tellg() seekp() tellp()

// 1. isream&seekg(streampos position); 2. istream&seekg(streamoff offset, ios_base::Seekdir dir);

// ios_base::beg();
// ios_base::cur();
// ios_base::end();

// Program to demonstrate how seekg() works
/*
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
    fstream myFile("test.text",ios::in|ios::out|ios::trunc);
    myFile<<"Hello World";
    myFile.seekg(6,ios::beg);
    char A[6];
    myFile.read(A, 5);
    A[5] = 0;
    cout<<A<<endl;
    myFile.close();
}


// program to demonstrate working of seekp() with Binary file

//seekp((n-1)*Sizeof(object))


#include<iostream>
#include<fstream>
using namespace std;

class student
{
    int rno;
    char name[20] = "Prerak";
public:
    void getdata()
    {
       //name = "Prerak";
        rno = 4;
    }
    void putdata()
    {
        cout<<rno<<endl<<name<<endl;
    }
    void DisplayRecordAtPosition(int);
};

void student::DisplayRecordAtPosition(int n)
{
    ofstream ofs;
    ofs.open("he.dat", ios::out|ios::binary);
    cout<<"Size of record: "<<sizeof(*this)<<endl;
    ofs.seekp((n - 1) * sizeof(student));
    ofs.write((char*)this, sizeof(student));


    ofs.close();

    ifstream ifs;
    ifs.open("he.dat", ios::in|ios::binary);
    ifs.seekg((n - 1)*sizeof(student));
    ifs.read((char*)this, sizeof(student));
    putdata();
    ifs.close();
}

int main()
{
    student s;
    int pos = 1;
    s.getdata();
    cout<<"record no "<<pos<<" (position int file "<<pos-1<<")"<<endl;
    s.DisplayRecordAtPosition(pos);
    return 0;
}


// To demonstrate working of tellg()

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    string str = "C++";
    istringstream in(str);

    string word;
    in>>word;
    cout<<"After reading the word\""<<word<<"\" tellg() returns"<<in.tellg()<<"\n";
}


// To demonstrate the working of tellp()

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    fstream file;

    file.open("myfile.dat", ios::out);
    file<<"C++";

    cout<<"The current position of pointer is: "<<file.tellp()<<endl;

    file.close();
}
*/

// Using all functions in below program

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream F;
    F.open("my.text",ios::in|ios::out);

    cout<<F.tellg()<<endl;
    F.seekg(8, ios::beg);
    cout<<F.tellg()<<endl;
    char c = F.get();
    cout<<c<<endl;

    cout<<F.tellg()<<endl;
    F.seekp(7, ios::beg);
    F.put('Z');
    F.seekg(-7, ios::end);
    cout<<"End: "<<F.tellg()<<endl;
    c = F.get();
    cout<<c<<endl;
    F.close();
    return 0;
}
