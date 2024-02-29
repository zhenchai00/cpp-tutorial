#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name; string gender; int age; string address; double ewallet_amount;
    cout << "Student Name\t\t:";
    getline(cin, name);
    cout << "Student Gender\t\t:";
    cin >> gender;
    cout << "Student Age\t\t:";
    cin >> age;
    cin.ignore();
    cout << "Student Home Address\t:";
    getline(cin, address);
    cout << "E-wallet Amount\t\t:RM ";
    cin >> ewallet_amount;
    cin.ignore();

    do {
        cout << '\n' << "Press the Enter key to continue.";
    } while (cin.get() != '\n');

    system("cls"); // windows env use cls 
    system("clear"); // unix env use clear 
    cout << endl << "Student details as below: \n";
    cout << string(81, '=') << endl;
    cout << "|Name \t\t | Age \t | Gender \t| Address \t| E-wallet amount\t|\n";
    cout << string(81, '=') << endl;
    cout << "|" << name << " \t | " << age << " \t | " << gender << " \t| " << address << " \t| RM";
    cout << fixed << setprecision(2) << ewallet_amount << "\t\t|\n";
    cout << string(81, '=') << endl;
    return 0;
}