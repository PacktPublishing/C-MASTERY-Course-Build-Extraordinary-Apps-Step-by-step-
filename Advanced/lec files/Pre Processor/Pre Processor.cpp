// To demonstrate working of macros
/*
#include <iostream>
#define LIMIT 5
using namespace std;

int main()
{
    for(int i=0; i<LIMIT; i++)
    {
        cout<<i<<endl;
    }
    return 0;
}
*/

// To demonstrate working of macros with arguements

#include <iostream>
#define AREA(l,b) (l*b)
using namespace std;

int main()
{
    int L1 = 10, L2 = 5, area;

    area = AREA(L1, L2);
    cout<<"Area of Rectangle is: "<<area;
    return 0;
}

'ifdef' and 'endif'

// #ifdef 'macro_name'
// statement 1;
// endif
