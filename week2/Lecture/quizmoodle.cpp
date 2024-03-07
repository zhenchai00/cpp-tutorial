#include <iostream>
#include <iomanip>

using namespace std;

void quiz1 () {
    int a, b = 20;
    a = 92 / b;
    cout << a << endl;
    // 4
}

void quiz2 () {
    int a = 353, b = 4;
    double total = 0;
    total = double (a / b);
    cout << fixed << setprecision(1) << total << endl;
    // output: 88.0
}

void quiz3 () {
    int a = 46, b = 20;
    double total = 0;
    total = a / b;
    cout << total << endl;
    // output: 2
}

void quiz4 () {
    int a = 353, b = 4;
    double total = 0;
    total = double (a) / (b);
    cout << fixed << setprecision(1) << total << endl;
    // 88.2 
}

void quiz5 () {
    char a = '1';
    switch (a)
    {
        case 1: cout << "hello";
        case 2: cout << "bye"; break;
        default: cout << "oh";
    }
    // oh
}

void quiz6 () {
    char value = 'a';
    for (int row = 1; row <= 5; row++) {
        for (int col = row; col < 5; col++) {
            cout << char (value + col) << "\t";
        }
        cout << endl;
        // output (row 1): b c d e
        // output (row 2): c d e
        // output (row 3): d e
        // output (row 4): e
        // output (row 5):

        // lecture answer:
        // output (row 1): b b b b
        // output (row 2): c c c 
        // output (row 3): d d
        // output (row 4): e
        // output (row 5):
    }
}

void quiz7 () {
    string a = "1";
    // switch (a)
    // {
    //     case 1: cout << "hello";
    //     case 2: cout << "bye"; break;
    //     default: cout << "oh";
    // }
    // output: compilation error
    // switch case only receive char and int datatype only
}

void quiz8 () {
    bool flag = true;
    int count = 0;
    while (count < 10 || flag) {
        cout << "Hello";
        count++;
    }
    // output: inifinite loop
}

void quiz9 () {
    bool flag = true;
    int count = 0;
    while (count < 10 || flag) {
        cout << "Hello";
        count++;
    }
    flag = false;
    // output: inifinite loop
}

void quiz10 () {
    int a = 1;
    switch (a)
    {
        case 1: cout << "hello";
        case 2: cout << "bye"; break;
        default: cout << "oh";
    }
}

int main () {
    // quiz1();
    // quiz2();
    // quiz3();
    // quiz4();
    // quiz5();
    // quiz6();
    // quiz7();
    // quiz7();
    // quiz8();
    // quiz9();
    quiz10();
    return 0;
}