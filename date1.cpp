#include<iostream>

using namespace std;
struct Date 
{
   
        int day;
        int month;
        int year;
};
        void acceptDateFromConsole(Date *ptr)
        {
            cout<<"Enter Day=";
            cin>>ptr->day;
            cout<<"Enter Month=";
            cin>>ptr->month;
            cout<<"Enter Year=";
            cin>>ptr->year;
        }
        void printDateOnConsole(Date *ptr)
        {
            cout<<"Date=" <<endl;
            cout<<"Day="<<ptr->day<<endl;
            cout<<"Month="<< ptr->month<<endl;
            cout<<"Year="<<ptr->year<<endl;
        }

        bool is_valid_date(Date *ptr)
        {                      
            short int months[]={31, 28, 31, 30, 31, 30 ,31, 31, 30, 31, 30 , 31};
         
            if( ptr->year%4==0)
                months[1]=29 ; 
            if(!(ptr->day>=1 && ptr->day<= months[ptr->month-1])) 
                return false; 
            if(!( ptr->month>=1 && ptr->month<=12))
                return false; 
            if(!(ptr->year>=1 && ptr->year<=9999))
                return false; 
            return true; 
        }
        bool isLeapYear(Date *ptr)
        {
             if (ptr->year % 4 == 0 )
             return true;
             else
             return false;
}
    

    
int main(void)
{
    int choice;
    Date d;
    do
    {
        
        
        cout << "1. Accept Date\n";
        cout << "2. Print Date\n";
        cout << "3. Check Leap Year\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice)
        {
        

        case 1:
            acceptDateFromConsole(&d);
            if(!is_valid_date(&d))
            {
                   cout<<"Invalid Date entered"<<endl;
            }
            else{
                   cout<<"Valid date entered"<<endl;
            }
            break;

        case 2:
            
             if(!is_valid_date(&d))
            {
                   cout<<"Invalid date entered"<<endl;
            }
            else{
                 
                   cout<<"Valid date entered"<<endl;
                   printDateOnConsole(&d);
            }
            break;

        case 3:
            if (isLeapYear(&d))
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

