#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define MAXSIZE 10

int main()
{
    int array1[MAXSIZE];
    int array2[MAXSIZE];
    for (int i = 0; i < size(array1); i++)
    {
        cout << "Enter value " << i + 1 << " (bet 10 - 50): ";
        cin >> array1[i];
        for (int j = 0; j < i; ++j)
        {
            while (array1[i] == array1[j])
            {
                cout << "1 already in the list! Please choose other value!" << endl;
                cout << "Enter value " << i + 1 << " : ";
                cin >> array1[i];
                j = 0;
            }
        }
        array2[i] = array1[i];
    }
    for (int k = 0; k < size(array1); ++k)
    {
        cout << array1[k] << ", ";
    }

    // do a sort after reading
    // first sorting: bubble sort, worst case = O(n^2), average case = O(n^2), best case = O(N)/O(n^2)
    auto start = high_resolution_clock::now();
    for (int round = 1; round <= size(array1); round++)  // O(N)
    {
        bool swapResult = false;
        cout << endl << endl << "Round " << round << "'s: ";
        for (int colIndex = 0; colIndex < size(array1) - 1; colIndex++)  // O(N)
        {
            if (array1[colIndex] > array1[colIndex + 1])
            {
                int temp = array1[colIndex];
                array1[colIndex] = array1[colIndex + 1];
                array1[colIndex + 1] = temp;
                swapResult = true;
            }
        }
        for (int i = 0; i < size(array1); ++i)
        {
            cout << array1[i] << ", ";
        }
        if (swapResult == false)
        {
            break;
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << endl << "Sorted list as below: " << endl;
    for (int i = 0; i < size(array1); ++i)
    {
        cout << array1[i] << ", ";
    }

    cout << endl << endl << "Tme execution for this bubble sort in this dataset = " << duration.count() << " microseconds!" << endl;


    // do a sort for second array - insertion sort 
    int key, j;
    auto start1 = high_resolution_clock::now();
    for (int round = 1; round < size(array2); round++)
    {
        cout << endl << endl << "Round " << round << "'s : ";
        key = array2[round];
        j = round;
        while (j > 0 && array2[j - 1] > key)
        {
            array2[j] = array2[j - 1];
            j--;
        }
        array2[j] = key;
        for (int i = 0; i < size(array2); ++i)
        {
            cout << array2[i] << ", ";
        }
    }
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);

    cout << endl << "Sorted list as below: " << endl;
    for (int i = 0; i < size(array2); ++i)
    {
        cout << array2[i] << ", ";
    }
    cout << endl << endl << "Tme execution for this bubble sort in this dataset = " << duration.count() << " microseconds!" << endl;

    _sleep(10000);
    return 0;
}