#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void binarySearch (int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        // find the middle index of the array
        int mid = left + ((right - left) / 2);

        if (arr[mid] == target) // target in exact middle
        {
            // result = mid;
            cout << "Bubble sort with binary search value of " << target << " at column " << mid << endl;
            return;
        }
        else if (arr[mid] < target) // target greater ignore left half
        {
            left = mid + 1;
        }
        else // target lesser ignore right half
        {
            right = mid - 1;
        }
    }
    return;
}

int main()
{
    int dataset[] = {5, 1, 1, 3, 66, 3, 2, 77, 9, 118, 33, 4, 5, 6, 88, 22, 14, 17, 45, 34, 6, 88, 3, 2, 1, 66, 48, 49, 33, 37, 44, 77, 80, 30, 31, 3, 10, 6, 9, 88};
    int datasetSize = size(dataset);
    cout << "dataset size = " << datasetSize << endl;

    // bubble sort
    auto startBubble = high_resolution_clock::now();
    for (int round = 0; round < datasetSize; round++)
    {
        bool swapIndicator = false;
        for (int colIndex = 0; colIndex < datasetSize - 1; colIndex++)
        {
            if (dataset[colIndex] > dataset[colIndex + 1])
            {
                int temp = dataset[colIndex];
                dataset[colIndex] = dataset[colIndex + 1];
                dataset[colIndex + 1] = temp;
                swapIndicator = true;
            }
        }
        // cout << endl << "Round " << round << "'s :";
        // for (int i = 0; i < datasetSize; i++)
        // {
        //     cout << dataset[i] << ", ";
        // }
        // cout << endl;

        if (!swapIndicator)
        {
            break;
        }
    }
    auto stopBubble = high_resolution_clock::now();
    auto durationBubble = duration_cast<microseconds>(stopBubble - startBubble);
    cout << "Sorted list as below (bubble sort): " << endl;
    for (int i = 0; i < datasetSize; i++)
    {
        cout << dataset[i] << ", ";
    }
    cout << endl
         << endl;

    // binary search
    int target = 88;
    int left = 0;
    int right = datasetSize - 1;
    int result = -1;

    auto startBubbleBinary = high_resolution_clock::now();
    binarySearch(dataset, 0, datasetSize - 1, target);
    auto stopBubbleBinary = high_resolution_clock::now();
    auto durationBubbleBinary = duration_cast<microseconds>(stopBubbleBinary - startBubbleBinary);

    auto sumDurationBubbleBinary = durationBubble + durationBubbleBinary;
    cout << "Time execution for Bubble Sort = " << durationBubble.count() << " microseconds" << endl;
    cout << "Time execution for Binary search = " << durationBubbleBinary.count() << " microseconds" << endl;
    cout << "Time execution for Bubble Sort and Binary search = " << sumDurationBubbleBinary.count() << " microseconds";
    cout << endl
         << endl;

    // insertion sort
    int dataset2[] = {5, 1, 1, 3, 66, 3, 2, 77, 9, 118, 33, 4, 5, 6, 88, 22, 14, 17, 45, 34, 6, 88, 3, 2, 1, 66, 48, 49, 33, 37, 44, 77, 80, 30, 31, 3, 10, 6, 9, 88};
    int dataset2Size = size(dataset2);
    cout << "dataset size = " << dataset2Size << endl;
    auto startInsert = high_resolution_clock::now();
    for (int round = 0; round < dataset2Size; round++)
    {
        int key = dataset2[round];
        int temp = round;
        while (temp > 0 && dataset2[temp - 1] > key)
        {
            dataset2[temp] = dataset2[temp - 1];
            temp--;
        }
        dataset2[temp] = key;
        // cout << endl << "Round " << round << "'s :";
        // for (int i = 0; i < datasetSize; i++)
        // {
        //     cout << dataset[i] << ", ";
        // }
        // cout << endl;
    }
    auto stopInsert = high_resolution_clock::now();
    auto durationInsert = duration_cast<microseconds>(stopInsert - startInsert);

    cout << "Sorted list as below (insertion sort): " << endl;
    for (int i = 0; i < dataset2Size; i++)
    {
        cout << dataset2[i] << ", ";
    }
    cout << endl
         << endl;

    // binary search
    int target2 = 88;
    int left2 = 0;
    int right2 = dataset2Size - 1;
    int result2;

    auto startInsertionBinary = high_resolution_clock::now();
    binarySearch(dataset2, 0, dataset2Size - 1, target2);
    auto stopInsertBinary = high_resolution_clock::now();
    auto durationInsertBinary = duration_cast<microseconds>(stopInsertBinary - startInsertionBinary);

    auto sumDurationInsertBinary = durationInsert + durationInsertBinary;
    cout << "Time execution for Insert Sort = " << durationInsert.count() << " microseconds" << endl;
    cout << "Time execution for Binary search = " << durationInsertBinary.count() << " microseconds" << endl;
    cout << "Time execution for Insert Sort and Binary search = " << sumDurationInsertBinary.count() << " microseconds";
    _sleep(100000);
}