// To demonstrate the working of exception handling in c++

/*
#include <iostream>
using namespace std;

int main()
{
   int x = -1;
   cout<<"Before try"<<endl;
   try
   {
       cout<<"Inside try"<<endl;
       if(x<0)
       {
           throw x;
           cout<<"After throw"<<endl;
       }
   }
   catch(int x)
   {
       cout<<"Exception caught"<<endl;
   }
   cout<<"After catch"<<endl;
   return 0;
}


#include <iostream>
using namespace std;

int test(int a)
{
    try
    {
        if(a>0)
            throw a;
        else
            throw 'a';
    }
    catch(int a)
    {
        cout<<"Caught an integer "<<a<<endl;
    }
    catch(char a)
    {
        cout<<"Caught an alphabet "<<a<<endl;
    }
    return 0;
}

int main()
{
    cout<<"Multiple catches: "<<endl;
    test(10);
    test(-1);
    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int p,c,m,err=0;
    string name;

    do
    {
        try
        {
            cout<<"Enter student name: "<<endl;
            cin>>name;
            cout<<"Enter physics marks: "<<endl;
            cin>>p;

            if(!(p>=0 && p<=100))
            {
                throw(p);
            }
            cout<<"Enter chemistry marks: "<<endl;
            cin>>c;
            if(!(c>=0 && c<=100))
            {
                throw(c);
            }
            cout<<"Enter Maths marks: "<<endl;
            cin>>m;
            if(!(m>=0 && m<=100))
            {
                throw(m);
            }
            err=0;
        }
        catch(int e)
        {
            cout<<"Invalid marks!"<<endl;
            err=1;
        }

    }
    while(err);
}
