/*#include <iostream>
using namespace std;

int main()
{
    double * pvalue = NULL;
    pvalue = new double;
    *pvalue = 29494.99;
    cout<<"value of pvalue: "<<*pvalue<<endl;
    delete pvalue;
    return 0;
}
*/

// To demonstrate Dynamic memory for objects

#include <iostream>
using namespace std;

class Box
{
public:
    Box()
    {
        cout<<"constructor called"<<endl;

    }
    ~Box()
    {
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    Box * myBoxArray = new Box[4];
    delete [] myBoxArray;
    return 0;
}
