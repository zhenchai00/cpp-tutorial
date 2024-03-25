// Exercise 3: learn how to use pointer parameter to 
// direct access the array content in main function
// without bringing the whole content to the function 

#include <iostream>
using namespace std;

// function using pointer parameter
void sum1ToArrayCol(int *arrayAddress, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arrayAddress + i) = *(arrayAddress + i) + 1; // using pointer concept to do the addition in array
    }

    for (int i = 0; i < size; i++)
    {
        arrayAddress[i] = arrayAddress[i] + 1;  // using normal array concept to do the addition in the array
    }
}
// function without using pointer parameter
void sum1ToArrayCol1(int arrayAddress[], int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arrayAddress + i) = *(arrayAddress + i) + 1; // using pointer concept to do the addition in array
    }

    for (int i = 0; i < size; i++)
    {
        arrayAddress[i] = arrayAddress[i] + 1;  // using normal array concept to do the addition in the array
    }
}

int main()
{
    int dataset[] = {5, 7, 3, 4, 8};
    sum1ToArrayCol(dataset, size(dataset));
    cout << "After calling the function, the value in array as below " << endl;
    for (int i = 0; i < size(dataset); i++)
    {
        cout << dataset[i] << ", ";
    }
    cout << endl;

    sum1ToArrayCol1(dataset, size(dataset));
    cout << "After calling the function, the value in array as below " << endl;
    for (int i = 0; i < size(dataset); i++)
    {
        cout << dataset[i] << ", ";
    }
    cout << endl;
    return 0;
}