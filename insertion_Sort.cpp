#include<iostream>
using namespace std;

// Printing Array...
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Insertion_Sort...
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)  // 1st (i = 1); 2nd (i = 2);
    {
        int key = arr[i]; // key = 1st(arr[1]); 2nd(arr[2]);
        int j = i - 1; // j = 0; j = 1;
        while (j >= 0 && arr[j] > key) // (arr[j] > key) = 1st(arr[0] > arr[1]); 2nd (arr[1] > arr[2]); // first (arr[j]>key) if arr[0] > arr[1];
        {
            arr[j + 1] = arr[j]; // 1st(arr[1] = arr[0]), 2nd(arr[2]); // arr[1] = arr[0], (Replacing);
            j--; // 1st{(j-1) = -1}; 2nd{1-1) = 0}; 3rd{2-1 = 1}; 4th{j = 2};
        }
        arr[j + 1] = key; // j-- 1st{[arr[-1+1] = (0)] arr[0] = key}; 2nd{(0+1) = (1)key} & key = arr.
    }
}

int main()
{
    int size = 5;
    int data[] = { 43, 31, 26, 29,12 };
    cout << "..:: Unsorted Data\t: ";
    printArray(data, size);
    insertionSort(data, size);

    cout << "..:: Sorted Data\t: ";
    printArray(data, size);
    return 0;
}
