#include <iostream>
#include <string.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <unistd.h>
using namespace std;


class one
{
public:
    void menul();
};

void one::menul()
{
    cout<<"\n\n\n\t\t\t\t\t\ ===============WELCOME TO FOOD ORDERING APP ================"<<endl;
    cout<<"\n\n\n\t\t\t\t\t =====================START YOUR ORDER================="<<endl;
    cout<<"\n\n\n\t===============================\t\t\t============================\t\t\t\t======================================="<<endl;
    cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;

}

class two:public one
{
protected:
    int pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
    string y,ye;
public:
    void menu2()
    {
        ofstream write;
        write.open("order.text");
        if(!write)
        {
            cout<<"File cannot open"<<endl;
            exit(-1);
        }
        a:
            b:
                c:
                    cout<<"\n\n\tENTER YOUR ORDER (one order at a time): ";
                    cin>>ch;

                    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n): ";
                    cin>>ye;

                    if(ye=="y"||ye=="Y")
                    {
                        goto b;
                    }
                    else
                    {
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n\n\tHOW MANY PIZZA YOU WANT: ";
                            cin>>pizza;

                            a=480;
                            s=s+a*pizza;
                            write<<"YOU ORDER veggie supreme: 480";
                            write<<"\n";
                            write<<"NUMBER OF PIZZA IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER veggie Supreme"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED"<<endl;
                            break;

                        case 2:
                            cout<<"\n\n\tHOW MANY PIZZA YOU WANT: ";
                            cin>>pizza;

                            b=440;
                            s=s+b*pizza;
                            write<<"YOUR ORDER Exotica: 440";
                            write<<" \n";
                            write<<"NUMBER OF PIZZA IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Exotica "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                        case 3:
                            cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT: ";
                            cin>>pizza;

                            c=580;
                            s=s+c*pizza;
                            write<<"YOUR ORDER chicken sizzler : 580";
                            write<<" \n";
                            write<<"NUMBER OF CHICKEN SIZZLER IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Chicken sizzler "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                        case 4:
                            cout<<"\n\n\tHOW MANY CRISPY CHICKEN YOU WANT: ";
                            cin>>pizza;

                            d=520;
                            s=s+d*pizza;
                            write<<"YOUR ORDER cripsy chicken: 520";
                            write<<" \n";
                            write<<"NUMBER OF CRISPY CHICKEN IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER CRISPY CHICKEN "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                        case 5:
                            cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT: ";
                            cin>>pizza;

                            e=350;
                            s=s+e*pizza;
                            write<<"YOUR ORDER spaghetti: 350";
                            write<<" \n";
                            write<<"NUMBER OF SPAGHETTI IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER SPAGHETTI "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                        case 6:
                            cout<<"\n\n\tHOW MANY PIZZA YOU WANT: ";
                            cin>>pizza;

                            f=400;
                            s=s+f*pizza;
                            write<<"YOUR ORDER Country Feast: 400";
                            write<<" \n";
                            write<<"NUMBER OF PIZZA IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                        case 7:
                            cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT: ";
                            cin>>pizza;

                            g=420;
                            s=s+b*pizza;
                            write<<"YOUR ORDER Tetrazzini: 420";
                            write<<" \n";
                            write<<"NUMBER OF Tetrazzini IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Tetrazzini "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 8:
                              cout<<"\n\n\tHOW MANY PIZZA YOU WANT: ";
                            cin>>pizza;

                            h=540;
                            s=s+h*pizza;
                            write<<"YOUR ORDER Double cheese: 540";
                            write<<" \n";
                            write<<"NUMBER OF PIZZA IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Double cheese "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 9:
                                cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT: ";
                            cin>>pizza;

                            i=548;
                            s=s+i*pizza;
                            write<<"YOUR ORDER Makizushi: 548";
                            write<<" \n";
                            write<<"NUMBER OF Makizushi IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 10:
                                cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT: ";
                            cin>>pizza;

                            j=390;
                            s=s+j*pizza;
                            write<<"YOUR ORDER Ham burger: 390";
                            write<<" \n";
                            write<<"NUMBER OF Ham Burger IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 11:
                                cout<<"\n\n\tHOW MANY PIZZA YOU WANT: ";
                            cin>>pizza;

                            k=525;
                            s=s+k*pizza;
                            write<<"YOUR ORDER Margheritta: 525";
                            write<<" \n";
                            write<<"NUMBER OF PIZZA IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Margheritta "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 12:
                                cout<<"\n\n\tHOW MANY Fish 'n' chips YOU WANT: ";
                            cin>>pizza;

                            l=425;
                            s=s+l*pizza;
                            write<<"YOUR ORDER Fish 'n' Chips: 425";
                            write<<" \n";
                            write<<"NUMBER OF Fish 'n' chips IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Fish 'n' chips "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 13:
                                cout<<"\n\n\tHOW MANY FAJITAS YOU WANT: ";
                            cin>>pizza;

                            m=335;
                            s=s+m*pizza;
                            write<<"YOUR ORDER Fajitas: 335";
                            write<<" \n";
                            write<<"NUMBER OF FAJITAS IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 14:
                                cout<<"\n\n\tHOW MANY TEMPURA YOU WANT: ";
                            cin>>pizza;

                            n=324;
                            s=s+n*pizza;
                            write<<"YOUR ORDER Tempura: 324";
                            write<<" \n";
                            write<<"NUMBER OF Tempura IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER Tempura "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 15:
                                cout<<"\n\n\tHOW MANY HOT DOG YOU WANT: ";
                            cin>>pizza;

                            o=360;
                            s=s+o*pizza;
                            write<<"YOUR ORDER Hot Dog: 360";
                            write<<" \n";
                            write<<"NUMBER OF HOT DOG IS: "<<pizza;
                            write<<"\n";
                            cout<<"\n\n\n\tYOU ORDER HOT DOG "<<endl<<"\tYOUR ORDER WAS SUCCESSFULLY SAVED"<<endl;
                            break;

                            case 16:
                                exit(0);
                                break;

                            default:
                                cout<<"\n\n\t\t\t\t\t YOU ENTERED WRONG ORDER KEY!!!!"<<endl;
                                goto c;
                                break;
                        }
                        cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no): ";
                        cin>>y;
                        if(y=="yes"||y=="YES")
                        {
                            goto a;
                        }
                        else{cout<<"\n\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL";}
                        for(int a=1;a<0;a++)
                        {
                            Sleep(500);
                            cout<<"...";
                        }
                        cout<<"\n\t\t\t\t\t\t";
                        system("PAUSE");

                    }

   system("cls");
   cout<<"\n\t\t\t\t\t\t ========================================================="<<endl;
   cout<<"\n\t\t\t\t\t\t                 FOOD ORDERING SYSTEM                    !"<<endl;
   cout<<"\n\t\t\t\t\t\t ========================================================="<<endl;

   cout<<endl;
   cout<<endl;

   cout<<"\t\t\t\t\t\t Bill No: CP51               Order: NB1353"<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"\t\t\t\t\t\t\ Cashier: Harry"<<endl;
   cout<<endl;
   cout<<"\n\t\t\t\t\t\t YOUR TOTAL BILL IS Rs."<<s<<endl;
   write<<"\t\t\t\t\t\t\t";
   write<<"\t\t\t\t\t\t\tTOTAL BILL IS Rs."<<s;
   cout<<"\n\t\t\t\t\t\t\t\t=================================================="<<endl;

   write.close();
    }
    void showl()
    {
        menul();
        menu2();
    }
};
class three:public one,public two
{
	public:
		void total()
      {
      		long userId; //for user id of administrator

			d:
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------";
			cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
			cin>>userId;
			cout<<"\t\t\t\t\t\t\t---------------------";
			if(userId!=1353)
			{
				cout<<"\nDon't try to be smart.....Enter correct id\n";
				goto d;
			}
			else
			cout<<"\n\n\n\t\t\t\t\t\t\tHello Code-Projects,\n";
			z:
			string pwd="pass";  //password
			string pass="";  //empty string
			char c;
				cout<<"\n\n\n\t\t\t\t\t\t\tPassword = ";
				p:
				c=_getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}

      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to our system\n\n\n";
      				system("PAUSE");
      				system("CLS");
      				showl();
				}
				else
				{
				cout<<"\nWrong Password\n";
				goto z;
				}
			}
		}
};
int main()
{
    three obj1;
    obj1.total();
    _getch();
}
