#include <iostream>
using namespace std;

int main()
{
    int cost = 6000;
    int earning = 1000;
    int salvage = 2000;
    float alt_return = 0.12 ;

    float annual_profit;
    int life = 1;

    while (true)
    {
        annual_profit = (earning * life + salvage - cost);

        if (annual_profit > alt_return)
        {
            cout << "Minimum life of machine is: " << life << " years";
            break;
        }
        life++;
    }
    system("pause");
    return 0;
}
