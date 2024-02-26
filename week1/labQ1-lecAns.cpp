#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name;
    string gender;
    int age;
    string address;
    double ewallet_amount;

    cout << "Student Name \t\t:";
    getline(cin, name);
    cout << "Student Gender \t\t:";
    cin >> gender;
    cout << "Student Age \t\t:";
    cin >> age;
    cin.ignore();
    cout << "Student Address \t:";
    getline(cin, address);
    cout << "E-wallet Amount \t:RM ";
    cin >> ewallet_amount;

    cout << '\n' << "Press the Enter key to continue...";
    cin.ignore(); // clear the buffer of the cin
    while (cin.get() != '\n');

    cout << endl
         << "Student details as below: \n";
    cout << string(81, '=') << '\n';
    cout << "|Name \t\t | Age \t | Gender \t| Address \t| E-wallet amount\t|\n";
    cout << string(81, '=') << '\n';
    cout << "|" << name << " \t | " << age << " \t | " << gender << " \t| " << address << " \t| RM";
    cout << fixed << setprecision(2) << ewallet_amount << "\t\t|\n";
    cout << string(81, '=') << endl;

    return 0;
}
