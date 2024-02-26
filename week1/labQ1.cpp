#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string stdName = "";
    string stdGender = "";
    int stdAge = 0;
    string stdAddress = "";
    double stdAmount = 0.0;

    cout << "Enter your name: ";
    cin >> stdName;

    cout << "\n";
    cout << "Enter your gender: ";
    cin >> stdGender;

    cout << "\n";
    cout << "Enter your age: ";
    cin >> stdAge;

    cout << "\n";
    cout << "Enter your address: ";
    cin >> stdAddress;

    cout << "\n";
    cout << "Enter your amount: ";
    cin >> stdAmount;

    cout << fixed;
    cout << "\n";
    cout << "Student Name \t\t: " << stdName << endl;
    cout << "Student Gender \t\t: " << stdGender << endl;
    cout << "Student Age \t\t: " << stdAge << endl;
    cout << "Student Address \t: " << stdAddress << endl;
    cout << "E-wallet Amount \t: RM " << setprecision(2) << stdAmount << endl;
    cout << "\n";
    cout << "Press any key to continue..." << endl;
    cout << "\n";
    cin.get();

    cout << "Student details as below: " << endl;
    cout << "===================================================================\n";
    cout << "|Name \t\t| Age | Gender\t | Address\t | E-wallet Amount\t|\n";
    cout << "===================================================================\n";
    cout << "|" << stdName << "\t\t| " << stdAge << " | " << stdGender << "\t | " << stdAddress << "\t | RM " << setprecision(2) << stdAmount << "\t\t|\n";
    cout << "===================================================================\n";

    return 0;
}