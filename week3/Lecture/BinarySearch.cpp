// Exercise 1: how to calculate the actual execution time & big O notation for linear search in array

#include <iostream>
#include <chrono> // time library

using namespace std;
using namespace std::chrono; // use time library

int main () {
    int dataset[] = { 5, 1, 1, 3, 66, 3, 2, 77, 9, 118, 33, 4, 5, 6, 88, 22,
	14, 17, 45, 34, 6, 88, 3, 2, 1, 66, 48, 49, 33, 37, 44, 77, 80,
	30, 31, 3, 10, 6, 9, 88 };

    int searchValue = 0;
    bool found = 0;
    cout << "Enter value you wish to search: ";
    cin >> searchValue;

    auto start = high_resolution_clock::now(); // start the timer

    // linear search -> best case = O(1); worst case = O(N); average case = O(N) // theoretical base
    for (int index = 0; index < size(dataset); index++) { // 1 for loop = O(N)
        if (searchValue == dataset[index]) {
            cout << searchValue << " is in the column index of " << index << endl;
            found = 1;
            break;
        }
    }

    auto stop = high_resolution_clock::now(); // stop the timer

    // calculate the execution time
    auto duration = duration_cast<microseconds>(stop - start);

    if (found == 0) {
        cout << searchValue << " is not in the list here!" << endl;
    }

    cout << "Time taken by linear search algorithm: ";
    cout << duration.count() << " microseconds" << endl;

    return 0;
}