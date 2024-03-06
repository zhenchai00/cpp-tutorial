#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main () {
    double rmbRate = 0.0;
    int type = -1; // 0 for rmb to dollar, 1 for dollar to rmb
    double amount = 0.0;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rmbRate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> type;

    if (type == 0) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        cout << "$" << fixed << setprecision(2) << amount << " is " << amount * rmbRate << " yuan" << endl;
    } else {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        cout << amount << " yuan is $" << fixed << setprecision(2) << amount / rmbRate << endl;
    }

    return 0;
}