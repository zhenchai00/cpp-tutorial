#include <iostream>

using namespace std;

// refer to the LabQ1-Ans.cpp file as reference 
int main () {
    int arrayValue[10];
    int input;
    for (int i = 0; i < 10; ++i) {
        cout << "Enter value " << i + 1 << " : ";
        cin >> arrayValue[i];
        for (int j = 0; j < i; ++j) {
            cout << "i = " << i << endl;
            cout << "j = " << j << endl;
            // while (arrayValue[i] == arrayValue[j]) {
            //     cout << "Value already in the list! Please choose other value!" << endl;
            //     cout << "Enter value " << j + 1 << " : ";
            // }
        }
        cout << endl;
    }
    for (int k = 0; k < size(arrayValue); ++k) {
        cout << arrayValue[k] << ", ";
    }
    return 0;
}