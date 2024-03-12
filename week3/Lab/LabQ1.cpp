#include <iostream>
#include <string>
#include <limits>

using namespace std;

void RecursiveReverseDisplayNumber (int num1, int num2) {

    // recursive method
    if (num2 >= num1) {
        cout << num2;
        if (num2 == num1) {
            cout << " = ";
        } else {
            cout << " + ";
        }
        RecursiveReverseDisplayNumber(num1, num2 - 1);
    }

    // for (int i = num2; i >= num1; i--) {
    //     cout << i;
    //     if (i == num1) {
    //         cout << " = ";
    //     } else {
    //         cout << " + ";
    //     }
    // }

    // // lecturer answer
    // if (num2 < num1) {
    //     return;
    // }
    // cout << num2;
    // if (num1 != num2) {
    //     cout << " + ";
    // } else {
    //     cout << " = ";
    // }
    // RecursiveReverseDisplayNumber(num1, num2 - 1);
}

int RecursiveCalSum (int num1, int num2) {
    int result = 0;

    // recursive method
    if (num2 >= num1) {
        result += num2 + RecursiveCalSum(num1, num2 - 1);
    }

    // for (int i = num2; i >= num1; i--) {
    //     result += i; 
    // }

    return result;

    // // lecture answer
    // if (num1 > num2)
    //     return 0;
    // return num1 + RecursiveCalSum(num1 + 1, num2);
}

int main() {
    int start, end;
    cout << "Enter a start value: ";
    cin >> start;
    while (cin.fail()) {
        cout << "Invalid input" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter a start value: ";
        cin >> start;
    }

    cout << "Enter a end value: ";
    cin >> end;
    while (cin.fail()) {
        cout << "Invalid input" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter a end value: ";
        cin >> end;
    }

    cout << endl;

    RecursiveReverseDisplayNumber(start, end);
    cout << RecursiveCalSum(start, end) << endl;
    return 0;
}