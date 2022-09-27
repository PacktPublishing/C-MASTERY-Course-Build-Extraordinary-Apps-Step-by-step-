/*
// sum of positive number only

#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;

    cout<<"Enter a number: ";
    cin>>number;

    while(number >= 0)
    {
        sum += number;

        cout<<"Enter a number: ";
        cin>>number;
    }
    cout<<"\n The sum is "<<sum<<endl;
    return 0;
}


// To demonstrate star pattern using while loop

#include <iostream>
using namespace std;

void pyramid(int n)
{
    int i=0, j=0, k=0;
    while(i<n)
    {
        while(k <= n-i-2) // for spacing
        {
            cout<<" ";
            k++;
        }
        k=0;
        // for pattern printing
        while(j<2*i-1)
        {
            cout<<"*";
            j++;
        }
        j=0;
        i++;
        cout<<endl;

    }
}

int main()
{
    int n = 5;

    pyramid(n); // function called
    return 0;
}
*/

// to print "Hello World" n number of times

#include <iostream>
using namespace std;

int main()
{
    int i=0,n;
    cout<<"How many times do you want the output to get printed: ";
    cin>>n;

    while(i < n)
    {
        cout<<"Hello World!"<<endl;
        i++;
    }
    return 0;
}
