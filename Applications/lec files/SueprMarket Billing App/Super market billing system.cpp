#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
using namespace std;

int k=7, r=0, flag=0;
COORD coord = {0,0};

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct date
{
    int mm, dd, yy;
};

ofstream fout;
ifstream fin;

class item
{
    int itemno;
    char name[25];
    date d;
public:
    void add()
    {
        cout<<"\n\n\tItem No: ";
        cin>>itemno;
        cout<<"\n\n\tName of the item: ";
        cin>>name;
        cout<<"\n\n\tManufacturing Date(dd-mm-yy): ";
        cin>>d.dd>>d.mm>>d.yy;
    }
    void show()
    {
        cout<<"\n\tItem no: "<<itemno;
        cout<<"\n\n\tName of the item"<<name;
        cout<<"\n\n\tDate"<<d.dd<<d.mm<<d.yy;
    }
    void report()
    {
        gotoxy(3,k);
        cout<<itemno;
        gotoxy(13,k);
        puts(name);
    }
    int retno()
    {
        return(itemno);
    }

};

class amount: public item
{
    float price, qty, tax, gross, dis, netamt;
public:
    void add();
    void show();
    void report();
    void calculate();
    void pay();
    float retnetamt()
    {
        return(netamt);
    }
} amt;

void amount::add()
{
    item::add();
    cout<<"\n\n\tPrice: ";
    cin>>price;
    cout<<"\n\n\tQuantity: ";
    cin>>qty;
    cout<<"\n\n\tTax Percent: ";
    cin>>tax;
    cout<<"\n\n\\tDiscount Percent: ";
    cin>>dis;
    calculate();
    fout.write((char*)&amt, sizeof(amt));
    fout.close();
}

void amount::calculate()
{
    gross = price+(price*(tax/100));
    netamt = qty*(gross-(gross*(dis/100)));
}

void amount::show()
{
    fin.open("itemstore.dat",ios::binary);
    fin.read((char*)&amt,sizeof(amt));
    item::show();
    cout<<"\n\n\tNet Amount: ";
    cout<<netamt;
    fin.close();
}

void amount::report()
{
    item::report();
    gotoxy(23,k);
    cout<<price;
    gotoxy(33,k);
    cout<<qty;
    gotoxy(44,k);
    cout<<tax;
    gotoxy(52,k);
    cout<<dis;
    gotoxy(64,k);
    cout<<netamt;
    k = k+1;
    if(k==50)
    {
        gotoxy(25,50);
        cout<<"PRESS ANY KEY TO CONTINUE...";
        _getch();
        k=7;
        system("cls");
        gotoxy(30,3);
        cout<<" ITEM DETAILS ";
        gotoxy(3,5);
        cout<<"NUMBER";
        gotoxy(13,5);
        cout<<"NAME";
        gotoxy(23,5);
        cout<<"PRICE";
        gotoxy(33,5);
        cout<<"QUANTITY";
        gotoxy(44,5);
        cout<<"TAX";
        gotoxy(52,5);
        cout<<"DEDUCTION";
        gotoxy(64,5);
        cout<<"NET AMOUNT";

    }
}

void amount::pay()
{
    show();
    cout<<"\n\n\n\t\t**********************************************";
    cout<<"\n\t\t                   DETAILS                        ";
    cout<<"\n\n\n\t\t**********************************************";
    cout<<"\n\n\t\tPRICE                              :"<<price;
    cout<<"\n\n\t\tQUANTITY                           :"<<qty;
    cout<<"\n\n\t\tTAX PERCENTAGE                     :"<<tax;
    cout<<"\n\n\t\tDISCOUNT PERCENTAGE                :"<<dis;
    cout<<"\n\n\t\tNET AMOUNT                         :$"<<netamt;
    cout<<"\n\n\n\t\t**********************************************";

}

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout<<setprecision(2);
    fstream tmp("temp.dat",ios::binary|ios::out);
    menu:
    system("cls");
    gotoxy(25,2);
    cout<<"Super Market Billing ";
    gotoxy(25,3);
    cout<<"===========================\n\n";
    cout<<"\n\t\t1.Bill Report\n\n";
    cout<<"\n\t\t2.Add/Remove/Edit Item\n\n";
    cout<<"\n\t\t3.Show Item Details\n\n";
    cout<<"\n\t\t4.Exit\n\n";
    cout<<"\t\tPlease Enter Required Option: ";
    int ch, ff;
    float gtotal;
    cin>>ch;
    switch(ch)
    {
    case 1:
        ss:
            system("cls");
            gotoxy(25,2);
            cout<<"Bill Details";
            gotoxy(25,3);
            cout<<"=================\n\n";
            cout<<"\n\t\t1.All Items\n\n";
            cout<<"\n\t\t2.Back to main menu\n\n";
            cout<<"\t\tPlease Enter Required Option: ";
            int cho;
            cin>>cho;
            if(cho==1)
            {
                system("cls");
                gotoxy(30,3);
                cout<<" BILL DETAILS";
                gotoxy(3,5);
                cout<<"ITEM NO";
                gotoxy(13,5);
                cout<<"NAME";
                gotoxy(23,5);
                cout<<"PRICE";
                gotoxy(33,5);
                cout<<"QUANTITY";
                gotoxy(44,5);
                cout<<"TAX %";
                gotoxy(52,5);
                cout<<"DISCOUNNT %";
                gotoxy(64,5);
                cout<<"NET AMOUNT";
                fin.open("itemstore.dat",ios::binary);
                if(!fin)
                {
                    cout<<"\n\nFile Not Found.....";
                    goto menu;
                }
                fin.seekg(0);
                gtotal = 0;
                while(!fin.eof())
                {
                    fin.read((char*)&amt,sizeof(amt));
                    if(!fin.eof())
                    {
                        amt.report();
                        gtotal += amt.retnetamt();
                        ff=0;
                    }
                    if(ff!=0) gtotal=0;
                }
                gotoxy(17,k);
                cout<<"\n\n\n\t\tGrand Total="<<gtotal;
                _getch();
                fin.close();
            }
            if(cho==2)
            {
                goto menu;
            }
            goto ss;
    case 2:
        db:
            system("cls");
            gotoxy(25,2);
            cout<<"Bill Editor";
            gotoxy(25,3);
            cout<<"==================\n\n";
            cout<<"\n\t\t1.Add Item Details\n\n";
            cout<<"\t\t2.Edit Item Details\n\n";
            cout<<"t\t3.Delete Item Details\n\n";
            cout<<"\t\t4.Back to Main Menu ";
            int apc;
            cin>>apc;
            switch(apc)
            {
            case 1:
                fout.open("itemstore.dat",ios::binary|ios::app);
                amt.add();
                cout<<"\n\tItem Added Successfully!";
                _getch();
                goto db;

            case 2:
                int ino;
                flag = 0;
                cout<<"\n\n\tEnter Item Number to be Edited: ";
                cin>>ino;
                fin.open("itemstore.dat",ios::binary);
                fout.open("itemstore.dat",ios::binary|ios::app);
                if(!fin)
                {
                    cout<<"\n\nFile not found.....";
                    goto menu;
                }
                fin.seekg(0);
                r=0;
                while(!fin.eof())
                {
                    fin.read((char*)&amt,sizeof(amt));
                    if(!fin.eof())
                    {
                        int x = amt.item::retno();
                        if(x==ino)
                        {
                            flag = 1;
                            fout.seekp(r*sizeof(amt));
                            system("cls");
                            cout<<"\n\t\tCurrent Details are\n";
                            amt.show();
                            cout<<"\n\n\t\tEnter New Details\n";
                            amt.add();
                            cout<<"\n\t\tItem Details edited";
                        }
                    }
                    r++;
                }
                if(flag==0)
                {
                    cout<<"\n\t\tItem number does not exist.....Please Retry!";
                    _getch();
                    goto db;
                }
                fin.close();
                _getch();
                goto db;

            case 3:
                flag = 0;
                cout<<"\n\n\tEnter Item Number to be deleted: ";
                cin>>ino;
                fin.open("itemstore.dat",ios::binary);
                if(!fin)
                {
                    cout<<"\n\nFile not found....";
                    goto menu;
                }
                fin.seekg(0);
                while(fin.read((char*)&amt,sizeof(amt)))
                {
                    int x = amt.item::retno();
                    if(x!=ino)
                        tmp.write((char*)&amt,sizeof(amt));
                    else{flag = 1;}
                }
                fin.close();
                tmp.close();
                fout.open("itemstore.dat",ios::trunc|ios::binary);
                fout.seekp(0);
                tmp.open("temp.dat",ios::binary|ios::in);
                if(!tmp)
                {
                    cout<<"Error in file";
                    goto db;
                }
                while(tmp.read((char*)&amt,sizeof(amt)))
                    fout.write((char*)&amt,sizeof(amt));
                    tmp.close();
                    fout.close();
                    if(flag==1)
                        cout<<"\n\t\tItem Successfully Deleted";
                    else if(flag==0)
                        cout<<"\n\t\tItem does not Exist! Please Retry";
                    _getch();
                    goto db;

            case 4:
                goto menu;
            default:
                cout<<"\n\n\t\tWrong Choice!!!! Retry";
                _getch();
                goto db;
            }
            case 3:
                system("cls");
                flag=0;
                int ino;
                cout<<"\n\n\t\tEnter Item Number: ";
                cin>>ino;
                fin.open("itemstore.dat",ios::binary);
                if(!fin)
                {
                    cout<<"\n\nFile Not Found...\nProgram is Terminated!";
                    goto menu;
                }
                fin.seekg(0);
                while(fin.read((char*)&amt,sizeof(amt)))
                {
                    int x = amt.item::retno();
                    if(x==ino)
                    {
                        amt.pay();
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    cout<<"\n\t\tItem does not exist....Please Retry";
                _getch();
                goto menu;

            case 4:
                system("cls");
                gotoxy(20,20);
                cout<<"ARE YOU SURE, YOU WANT TO EXIT (Y/N)?";
                char yn;
                cin>>yn;
                if((yn=='Y')||(yn=='y'))
                {
                    gotoxy(12,20);
                    system("cls");
                    cout<<"*************THANKS*************";
                    _getch();
                    exit(0);
                }
                else if((yn=='N')||(yn=='n'))
                    goto menu;

                    else
                        {
                            goto menu;
                        }
            default:
                cout<<"\n\n\t\tWrong Choice.....Please Retry";
                _getch();
                goto menu;
    }
    return 0;
}
