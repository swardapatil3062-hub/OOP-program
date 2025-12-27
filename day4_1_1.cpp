#include<iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    string movie_name;
    float a_p, c_p, no_adult, no_child;

    cout << "Enter movie name: ";
    getline(cin, movie_name);

    cout << "Enter price for adult ticket : ";
    cin >> a_p;

    cout << "Enter price for child ticket : ";
    cin >> c_p;

    cout << "Enter number of adult ticket sold : ";
    cin >> no_adult;

    float t_adult = a_p * no_adult;
    cout << "Total amount of adult ticket : " << t_adult << endl;

    cout << "Enter number of child ticket sold : ";
    cin >> no_child;

    float t_child = c_p * no_child;
    cout << "Total amount of child ticket : " << t_child << endl;

    float total_no_ticket = no_adult*a_p + no_child*c_p;

    float gross_amt = t_adult + t_child;

    float persent;
    cout << "Enter Donation Percent : "<<endl;
    cin >> persent;

    float amt_d = (gross_amt * persent) / 100;
    float netSale = gross_amt - amt_d;




    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    cout << left << setw(30) <<setfill('.')<< "Movie Name:" << movie_name << endl;
    cout << left << setw(30) <<setfill('.')<< "Number of Tickets Sold:" << total_no_ticket << endl;
    cout << left << setw(30) <<setfill('.')<< "Gross Amount:" << "$ " << fixed << setprecision(2) << gross_amt << endl;
    cout << left << setw(30) <<setfill('.')<< "Percentage Donated:" << persent << "%" << endl;
    cout << left << setw(30) <<setfill('.')<< "Amount Donated:" << "$ " << amt_d << endl;
    cout << left << setw(30) <<setfill('.')<< "Net Sale:" << "$ " << netSale << endl;
    
    system("pause");
    return 0;
}
