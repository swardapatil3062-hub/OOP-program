#include <iostream>
using namespace std;

int main()
{
    int num, d1, d2, d3, d4, d5;

    cout << "Enter a five digit number: ";
    cin >> num;

    d5 = num % 10; //give last digit
    num = num / 10; //remove last digit
    d4 = num % 10; 
    num = num / 10;
    d3 = num % 10; 
    num = num / 10;
    d2 = num % 10; 
    num = num / 10;
    d1 = num % 10;

    d1 = (d1 + 1) % 10;//9+1=1=->0
    d2 = (d2 + 1) % 10;
    d3 = (d3 + 1) % 10;
    d4 = (d4 + 1) % 10;
    d5 = (d5 + 1) % 10;

    cout << "Number: ";
    cout << d1 << d2 << d3 << d4 << d5;
    system("pause");
    return 0;
}
