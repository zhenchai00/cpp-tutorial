// Exercise 2: learn 3 different parameters, 
// pointer parameter,
// value parameter,
// reference parameter.
#include <iostream>
using namespace std;

// function with value parameter => int a, int b
void sum1(int a, int b)
{
    a = a + 1;
    b = b + 1;
}
// function with pointer parameter => int *a, int *b
void sum2(int *a, int *b)
{
    *a = *a + 1;
    *b = *b + 1;
}
// function with reference parameter => int &a, int &b
void sum3(int &a, int &b)
{
    a = a + 1;
    b = b + 1;
}

int main()
{
    int a = 10;
    int b = 12;

    // calling the sum1 function and observe the a and b value in main function
    sum1(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // calling the sum2 function and observe the a and b value in main function
    sum2(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // calling the sum3 function and observe the a and b value in main function
    sum3(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}