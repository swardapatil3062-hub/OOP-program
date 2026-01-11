#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;


void initDate()
{
    day = 1;
    month = 1;
    year = 2000;
}

void acceptDateFromConsole()
{
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Year: ";
    cin >> year;
}

void printDateOnConsole()
{
    cout << "Date: "<< day << "-"<< month << "-"<< year << endl;
}
bool is_valid_date()
{
     int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
     if (year % 4 == 0 )
     {
              months[1]=29;
     }
     if(!(day>=1&&day<=months[months-1]))
     {
             return false;
     }
     if(!(months>=1&months<=12))
     {
             return false;
     }
     if(!(year>=1&&year<=9999))
     {
             return false;
     }
     do{
             cout<<"Enter valid Date"<<endl;
      while(is_valid_date())};     
                                                 
}       
     
bool isLeapYear()
{
    if (year % 4 == 0 )
        return true;
    else
        return false;
}
};


int main()
{
    int choice;
    Date d;
    do
    {
        
        
        cout << "1. Accept Date\n";
        cout << "2. Print Date\n";
        cout << "3. Check Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice)
        {
        

        case 1:
            d.acceptDateFromConsole();
            if(!d.is_valid_date())
            {
                   cout<<"Invalid Date entered"<<endl;
            }
            else{
                   cout<<"Valid date entered"<<endl;
            }
            break;

        case 2:
            d.printDateOnConsole();
             if(!d.is_valid_date())
            {
                   cout<<"Invalid month entered"<<endl;
            }
            else{
                   cout<<"Valid month entered"<<endl;
            }
            break;

        case 3:
            if (d.isLeapYear())
                cout << "Leap Year\n";
            else
                cout << "Not a Leap Year\n";
                
            break;

        case 4:
            cout << "Exit\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 4);
    system("pause");
    return 0;
}
