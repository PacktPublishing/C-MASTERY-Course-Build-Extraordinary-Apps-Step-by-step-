/*
//To write a class called 'number' with one integer data member and overload unary operator ++ to increment data member of object of class 'number'

#include <iostream>
using namespace std;

class number
{
    int x;
public:
    number()
    {
        x = 0;
    }
    void display()
    {
        cout<<"The value of x is: "<<x;
    }
    void operator ++()
    {
        x = ++x;
    }
};

int main()
{
    number obj;
    ++obj;
    obj.display();
    return 0;
}
*/

/* create class 'Matrix' of size m*n. Overload the '+' and '-' operator to add and subtract two
matrix objects respectively */

#include <iostream>
using namespace std;

class matrix
{
    int x[100][100],m,n;
public:
    void set_dimension()
    {
        cout<<"Enter the dimensions of the matrix: ";
        cin>>m>>n;
    }
    int matrix_m_row()
    {
        return m;
    }
    int matrix_n_column()
    {
        return n;
    }
    void getvalue()
    {
        cout<<"Enter"<<m*n<<"values for the matrix: "<<endl;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>x[i][j];
            }
        }
        cout<<endl;
    }
    void display()
    {
        cout<<"Matrix is: "<<endl;
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    void display(int a, int b)
    {
        cout<<"Matrix is"<<endl;
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    matrix operator+(matrix z)
    {
        matrix temp;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                temp.x[i][j]=x[i][j]+z.x[i][j];
            }
        }
        return temp;
    }
    matrix operator -(matrix z)
    {
        matrix temp;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                temp.x[i][j]=x[i][j]-z.x[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    matrix obj1;
    matrix obj2;
    matrix obj3;
    matrix obj4;

    obj1.set_dimension();
    obj1.getvalue();
    obj1.display();

    obj2.set_dimension();
    obj2.getvalue();
    obj2.display();

    obj3 = obj1 + obj2;
    cout<<"The matrix after addition is: "<<endl;
    int m,n;
    m = obj1.matrix_m_row();
    n = obj1.matrix_n_column();
    obj3.display(m,n);

    obj4 = obj1-obj2;
    cout<<"The matrix after subtraction is: "<<endl;
    obj4.display(m,n);

    return 0;
}
