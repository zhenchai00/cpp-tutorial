// learn how to build a function in a c++ program
// learn how to differentiate to use differ tpe of the function
// there have 4 type of function

// scenario : create summation function, with adding a and b value
#include <iostream>
using namespace std;

// function prototype
// function w/o return w/o parameters
// function w return w/o parameters
// function w return w parameters
// function w/o return w parameters

// function prototype
void summation1 ();

int summation2 () {
    int a = 19;
    int b = 20;
    cout << a << " + " << b;
    return a + b;
};

int summation3 (int a, int b) {
    return a + b;
};

void summation4 (int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
};

int main () {
    // 1. learn how to use the f w/o r w/o para
    summation1();

    // 2. learn how to use the f w r w/o para
    int total = summation2();
    cout << " = " << total << endl;

    // 3. learn how to use the f w r w para
    int a = 10;
    int b = 7;
    cout << a << " + " << b << " = " << summation3(a, b) << endl;

    // 4. learn how to use the f w/o r w para
    summation4(a, b);
    return 0;
}

void summation1 () {
    int a = 10;
    int b = 11;
    cout << a << " + " << b << " = " << a + b << endl;
}