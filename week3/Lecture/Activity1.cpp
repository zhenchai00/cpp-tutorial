#include <iostream>

using namespace std;

// Refer to activity1LecAns() function as Study purpose

void activity1 () {
    int billy[] = {16, 2, 77, 40, 12071, 51, 78};
    int sum = 0;

    for (int i = 0; i <= (sizeof(billy) / sizeof(billy[0])) - 1; i++) {
        sum += billy[i];
        cout << billy[i];
        if (i < (sizeof(billy) / sizeof(billy[0])) - 1) {
            cout <<" + ";
        } else {
            cout << " = ";
        }
    }
    cout << sum << endl;

    // lecturer answer
    int length1 = sizeof(billy) / sizeof(int); // can used by every env (linux,mac)
    int length2 = size(billy); // only use with vs C++ version 17 above
    // cout << length1 << " " << length2 << endl;
};

void activity1e2() {
    int billy[] = {16, 2, 77, 40, 12071, 51, 78};
    int length1 = sizeof(billy) / sizeof(int); // can used by every env (linux,mac)
    int length2 = size(billy); // only use with vs C++ version 17 above
    int temp1 = 0;
    int temp2 = 0;
    int max = 0;

    for (int i = 0; i <= length2; i++) {
        temp1 = billy[i];
        temp2 = billy[i + 1];
        cout << billy[i] << " " << billy[i+1] << endl;
        if (i != length2) {
            if (temp1 > max) {
                if (temp1 > temp2) {
                    max = temp1;
                } else {
                    max = temp2;
                }
            } else if (temp2 > max) {
                if (temp2 > temp1) {
                    max = temp2;
                } else {
                    max = temp1;
                }
            }
        }
    }
    cout << "max value = " << max << endl;
};

// Refer to this function as Study
void activity1LecAns() {
    int billy[] = {16, 2, 77, 40, 12071, 51, 78};
    int length1 = sizeof(billy) / sizeof(int); // can used by every env (linux,mac)
    int length2 = size(billy); // only use with vs C++ version 17 above
    int sum = 0;

    for (int i = 0; i < length2; i++) {
        sum += billy[i];
        cout << billy[i];
        if (i != length1 - 1) {
            cout << " + ";
        } else {
            cout << " = ";
        }
    }
    cout << sum << endl;

    int min = billy[0];
    int max = billy[0];
    
    // best case = O(1), worst case = O(N) - linear search
    // best case = O(1), worst case = O(log2(N)) - binary search (cut to half) -> if list is unsorted, can't use it 
    for (int i = 1; i < length1; i++) { // linear searching algorithm  O(N) execution time (sorted list, 1,2,3,4,5,6)
        if (billy[i] < min) {
            min = billy[i];
        }
        if (billy[i] > max) { 
            max = billy[i];
        }
    }
    cout << "Max Number = " << max << endl;
    cout << "Min Number = " << min << endl;
};

int main() {
    // activity1();
    // activity1e2();
    activity1LecAns();
    return 0;
}