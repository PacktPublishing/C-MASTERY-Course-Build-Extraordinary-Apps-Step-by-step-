
// To raise number m by n and taking default value as 2 if value of n is not entered

/*
#include <iostream>
using namespace std;

void power(double base, int exp = 2)
{
    double ans;
    for(int i = 1; i <= exp; i++)
    {
        ans = base;
    }
    cout<<ans;
}

int main()
{
    int n;
    double m;
    char ch;
    cout<<"Enter a base value: "<<endl;
    cin>>m;
    cout<<"Do you want to input an exponent value (Y/N): "<<endl;
    cin>>ch;

    if ((ch == 'y')||(ch == 'Y')) {
        cout<<"Enter exponent value: "<<endl;
        cin>>n;
        power(m,n);
    }
    else
    {
        power(m);
    }
    return 0;
}
*/

/*
// To print an increasing order of star pyramid

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout<<"Enter number of rows: "<<endl;
    cin>>rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
*/

// To build a pyramid using alphabets

#include <iostream>
using namespace std;

int main()
{
    char input, alphabet = 'A';

    cout<<"Enter the uppercase character you want to print int the last row: "<<endl;
    cin>>input;

    for(int i = 1; i <= (input- 'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<<alphabet<<" ";
        }
        ++alphabet;

        cout<<endl;
    }
    return 0;
}

/*

// To print pascal's triangle

#include <iostream>
using namespace std;

int main()
{
    int rows, coef = 1;

    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout<<"  ";

        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "  ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// To print Floyd's triangle

/*
#include <iostream>
using namespace std;

int main()
{
    int rows, number = 1;

    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<<number<<"  ";
            ++number;
        }
        cout<<endl;
    }
    return 0;
}
*/
