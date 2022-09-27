#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <cstring>
#define max 100
using namespace std;

class customer
{
public:
    char name[100];
    char address[100];
    char phone[12];
    char from_date[20];
    char to_date[20];
    float payment_advance;
    int booking_id;
};

class Room
{
public:
    char type;
    char stype;
    char ac;
    int roomNumber;
    int rent;
    int status;

    class customer cust;
    class Room addRoom(int);
    void searchRoom(int);
    void deleteRoom(int);
    void displayRoom(Room);
};

int count = 0;
class Room rooms[max];

Room Room::addRoom(int rno)
{
    class Room room;
    room.roomNumber = rno;
    cout<<"\n Type AC/Non-AC (A/N): ";
    cin>>room.ac;
    cout<<"\n Type Comfort (S/N): ";
    cin>>room.type;
    cout<<"\n Type Size (B/S): ";
    cin>>room.stype;
    cout<<"\n Daily Rent: ";
    cin>>room.rent;
    room.status = 0;

    cout<<"\n Room Added Successfully!";
    _getch();
    return room;
}

void Room::searchRoom(int rno)
{
    int i, found = 0;
    for(i=0; i<count; i++)
    {
        if(rooms[i].roomNumber==rno)
        {
            found = 1;
            break;
        }
    }
    if(found==1)
    {
        cout<<"Room Details\n";
        if(rooms[i].status==1)
        {
            cout<<"\nRoom is Reserved";
        }
        else
        {
            cout<<"\nRoom is available";
        }
        displayRoom(rooms[i]);
        _getch();
    }
    else
    {
        cout<<"\nRoom not found";
        _getch();
    }
}

void Room::displayRoom(Room tempRoom)
{
    cout<<"\nRoom Number: \t"<<tempRoom.roomNumber;
    cout<<"\nType AC/Non-AC (A/N) "<<tempRoom.ac;
    cout<<"\nType Comfort (S/N) "<<tempRoom.type;
    cout<<"\nType Size (B/S) "<<tempRoom.stype;
    cout<<"\nRent: "<<tempRoom.rent;
}

class HotelMgnt:protected Room
{
public:
    void checkIn();
    void getAvailRoom();
    void searchCustomer(char *);
    void checkout(int);
    void guestSummaryReport();
};

void HotelMgnt::guestSummaryReport()
{
    if(count==0)
    {
        cout<<"\n No Guest in Hotel";
    }
    for(int i=0; i<count; i++)
    {
        if(rooms[i].status==1)
        {
            cout<<"\n Customer First Name: "<<rooms[i].cust.name;
            cout<<"\n Room Number: "<<rooms[i].roomNumber;
            cout<<"\n Address (only City): "<<rooms[i].cust.address;
            cout<<"\n Phone: "<<rooms[i].cust.phone;
            cout<<"\n-------------------------------------------------";
        }
    }
    _getch();
}

void HotelMgnt::checkIn()
{
    int i, found=0, rno;
    Room room;
    cout<<"\n Enter Room Number: ";
    cin>>rno;
    for(i=0;i<count;i++)
    {
        if(rooms[i].roomNumber==rno)
        {
            found=1;
            break;
        }
    }
    if(found == 1)
    {
        if(rooms[i].status==1)
        {
            cout<<"\nRoom is already Booked!";
            _getch();
            return;
        }
        cout<<"\nEnter booking id: ";
        cin>>rooms[i].cust.booking_id;

        cout<<"\n Enter customer name (First Name): ";
        cin>>rooms[i].cust.name;
        cout<<"\nEnter Address (Only city): ";
        cin>>rooms[i].cust.address;
        cout<<"\nEnter Phone: ";
        cin>>rooms[i].cust.phone;
        cout<<"\nEnter From Date: ";
        cin>>rooms[i].cust.from_date;
        cout<<"\nEnter to Date: ";
        cin>>rooms[i].cust.to_date;
        cout<<"\nEnter Advance Payment: ";
        cin>>rooms[i].cust.payment_advance;
        rooms[i].status=1;
        cout<<"\n Customer Checked In successfully....";
        _getch();
    }
}

void HotelMgnt::getAvailRoom()
{
    int i, found = 0;
    for(i=0;i<count;i++)
    {
        if(rooms[i].status==0)
        {
            displayRoom(rooms[i]);
            cout<<"\n\nPress enter for next room";
            found = 1;
            _getch();
        }
    }
    if(found==0)
    {
        cout<<"\nAll rooms are reserved";
        _getch();
    }
}

void HotelMgnt::searchCustomer(char *pname)
{
    int i, found = 0;
    for(i=0;i<count;i++)
    {
        if(rooms[i].status==1 && stricmp(rooms[i].cust.name,pname)==0)
        {
            cout<<"\nCustomer name: "<<rooms[i].cust.name;
            cout<<"\nRoom Number: "<<rooms[i].roomNumber;
            cout<<"\n\nPress enter for next record";
            found = 1;
            _getch();
        }
    }
    if(found==0)
    {
        cout<<"\nPerson not found.";
        _getch();
    }
}

void HotelMgnt::checkout(int roomNum)
{
    int i, found = 0, days, rno;
    float billAmount=0;
    for(i=0;i<count;i++)
    {
        if(rooms[i].status==1 && rooms[i].roomNumber==roomNum)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        cout<<"\nEnter number of days: \t";
        cin>>days;
        billAmount = days*rooms[i].rent;

        cout<<"\n\t############### CheckOut Details ###########\n";
        cout<<"\nCustomer Name: "<<rooms[i].cust.name;
        cout<<"\nRoom Number: "<<rooms[i].roomNumber;
        cout<<"\nAddress: "<<rooms[i].cust.address;
        cout<<"\nPhone: "<<rooms[i].cust.phone;
        cout<<"\nTotal Amount Due: "<<billAmount<<"$";
        cout<<"\nAdvance Paid: "<<rooms[i].cust.payment_advance<<"$";
        cout<<"\n*** Total Payable: "<<billAmount-rooms[i].cust.payment_advance<<"$ only";

        rooms[i].status=0;
    }
    _getch();
}

void manageRooms()
{
    Room room;
    int opt, rno, i, flag=0;
    char ch;
    do
    {
        system("cls");
        cout<<"\n### Manage Rooms ###";
        cout<<"\n1. Add Room";
        cout<<"\n2. Search Room";
        cout<<"\n3. Back to main menu";
        cout<<"\n\n Enter an option";
        cin>>opt;

        switch(opt)
        {
        case 1:
            cout<<"\n Enter Room number: ";
            cin>>rno;
            i=0;
            for(i=0;i<count;i++)
            {
                if(rooms[i].roomNumber==rno)
                {
                    flag=1;
                }
            }
            if(flag=1)
            {
                cout<<"\nRoom number is present.\nPlease enter unique numebr";
                flag=0;
                _getch();
            }
            else
            {
                rooms[count]=room.addRoom(rno);
                count++;
            }
            break;
        case 2:
            cout<<"\nEnter room number: ";
            cin>>rno;
            room.searchRoom(rno);
            break;
        case 3:
            break;
        }
    } while(opt!=3);
}

int main()
{
    HotelMgnt hm;
    int it,j,opt,rno;
    char ch;
    char pname[100];
    system("cls");

    do
    {
        system("cls");
        cout<<"######## Hotel Management #######\n";
        cout<<"\n1. Manage/Add Rooms";
        cout<<"\n2. Check-In Room";
        cout<<"\n3. Available Rooms";
        cout<<"\n4. Search Customer";
        cout<<"\n5. Check-out Room";
        cout<<"\n6. Guest Summary report";
        cout<<"\n7. Exit";
        cout<<"\n\nEnter option: ";
        cin>>opt;
        switch(opt)
        {
        case 1:
            manageRooms();
            break;
        case 2:
            if(count==0)
            {
                cout<<"\nRooms data is not available. \nPlease add the rooms first";
                _getch();
            }
            else
            {
                hm.checkIn();
            }
            break;
        case 3:
            if(count==0)
            {
                cout<<"\nRooms data is not available. \nPlease add the rooms first";
                _getch();
            }
            else
                hm.getAvailRoom();
            break;
        case 4:
            if(count==0)
            {
                cout<<"\nRooms data is not available. \nPlease add the rooms first";
                _getch();
            }
            else{cout<<"Enter customer name: ";
                cin>>pname;
                hm.searchCustomer(pname);
            }
            break;
        case 5:
            if(count==0)
            {
                cout<<"\nRooms data is not available. \nPlease add the rooms first";
                _getch();
            }
            else
            {
                cout<<"Enter room number: ";
                cin>>rno;
                hm.checkout(rno);
            }
            break;
        case 6:
            hm.guestSummaryReport();
            break;
        case 7:
            cout<<"\nTHANK YOU! FOR USING THIS SOFTWARE";
            break;
        default :
            cout<<"\nPlease enter correct option";
            break;
        }
    } while(opt!=7);
    _getch();
}
