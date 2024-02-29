#include <iostream> // input output stream library
# include <iomanip> // input output manipulation library

using namespace std;

// int main() is the entry point of the program which return an integer
// void main() is the entry point of the program which return nothing
int main()
{
    // :: => scope operator 
    // std::cout << "Hello World";
    std::cout << "Hello World" << endl;
    cout << "Hello World" << endl;

    // int x;
    // cin >> x; // input from user
    // cout << x; // make sure to standardize the input output syntax

    // declare your variable
    int number1 = 0;
    int number2 = 10;

    // input result from the user
    cout << "Enter Number 1: ";
    cin >> number1;

    // calculate
    // int total = number1 + number2;
    // cout << "Total number: " << total << endl;

    double total = 19.0567 + 18.000999;
    cout << "Total number: " << total << endl;

    // display the total in 2 decimal point
    cout << fixed; // one time command to tell the compiler to display the decimal point
    cout << setprecision(2) << total << endl;
    cout << setprecision(3) << total << endl;
    
    return 0;
}