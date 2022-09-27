/* To check if the entered number is positive or negative or 0

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "The entered number is positive" << endl;
    }
    else if (number < 0)
    {
        cout << "The entered number is negative" << endl;
    }
    else
    {
        cout << "You entered 0" << endl;
    }
    return 0;
}
*/

//  To check if number is divisible by 5 or 8

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(a%5==0 && a%8==0)
    {
        cout<<"The entered number is divisible by both 5 and 8";
    }
    else if (a%8==0)
    {
        cout<<"The entered number is divisible by 8";
    }
    else if (a%5==0)
    {
        cout<<"The entered number is divisible by 5";
    }
    else
    {
        cout<<"divisible by none";
    }
    return 0;
}
