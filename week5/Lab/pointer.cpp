#include <iostream>
using namespace std;


int main ()
{
    // declaration 
    int a = 10;
    int b = 11;

    int *c = nullptr;
    int *d = nullptr;

    // assign variable address to the pointer
    c = &a;
    d = &b;

    // show the result
    cout << a << endl;      // display a value
    cout << b << endl;      // display b value
    cout << c << endl;      // display c reference address
    cout << d << endl;      // display d reference address

    // indirect to get the a value from pointer c
    // indirect to get the b value from pointer d
    cout << *c << endl;
    cout << *d << endl;

    // get the address of the current variable / pointers
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
    cout << &d << endl;

    // indirectly modify the content of the variable a and b using pointer
    *c = *c + 1;
    *d = *d + 1;
    cout << a << endl;
    cout << b << endl;

    // swap the pointer reference address between c and d
    // c = b, d = a
    int *temp = c;
    c = d;
    d = temp;
    cout << *c << endl;
    cout << *d << endl;


    _sleep(1000000);

    return 0;
}