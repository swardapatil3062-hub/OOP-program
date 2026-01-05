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
    //if(day>31)
    //{
    cin >> day;
    //}
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Year: ";
    cin >> year;
}

void printDateOnConsole()
{
    cout << "Date: "<< day << "-"<< month << "-"<< year << endl;
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
            break;

        case 2:
            d.printDateOnConsole();
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
