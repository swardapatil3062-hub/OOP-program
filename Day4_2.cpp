#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float sellingPrice, purchasePrice;
    float brokerage, stt, stampDuty, regulatory;

    cout << "Enter Selling Price: ";
    cin >> sellingPrice;

    cout << "Enter Purchase Price: ";
    cin >> purchasePrice;

    cout << "Enter Brokerage: ";
    cin >> brokerage;

    cout << "Enter STT: ";
    cin >> stt;

    cout << "Enter Stamp Duty: ";
    cin >> stampDuty;

    cout << "Enter Regulatory Charges: ";
    cin >> regulatory;

    float totalTaxes = brokerage + stt + stampDuty + regulatory;
    float profit = sellingPrice - purchasePrice - totalTaxes;

    cout << "\n-------------------------------------------\n";
    cout<<left<<" ";
    cout << left << setw(30) << "Selling Price:" << "Rs " << sellingPrice << endl;
    cout << left << setw(30) << "Purchase Price:" << "Rs " << purchasePrice << endl;
    cout << left << setw(30) << "Total Brokerage:" << "Rs " << brokerage << endl;
    cout << left << setw(30) << "Security Transaction Tax:" << "Rs " << stt << endl;
    cout << left << setw(30) << "Stamp Duty:" << "Rs " << stampDuty << endl;
    cout << left << setw(30) << "Regulatory Charges:" << "Rs " << regulatory << endl;
    cout << left << setw(30) << "Total Taxes:" << "Rs " << totalTaxes << endl;
    cout << "----------------------------------------------\n";
    cout << left << setw(30) << "Profit:" << "Rs " << profit << endl;
    system("pause");
    return 0;
}
