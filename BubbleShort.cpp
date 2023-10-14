#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
    bool swapped;
    // Outer Loop
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        // Inner Loop:
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, the array is already sorted.
        if (!swapped) // !true -> false.
            break;
                                                                                                                                                                                                       /*     
if (!swapped): This condition is part of the outer loop and checks whether any swaps were made in the inner loop during a pass of the outer loop. 
If no swaps were made (swapped is false), it means that the array is already sorted up to that point, and the outer loop is exited early using break.

So, to clarify, the if (!swapped) condition is part of the outer loop, and it determines whether to break out of the outer loop when no swaps occur during a pass of the inner loop.    
                                                                                                                                                                                                       */
           
    }
}
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "..:: Original array\t: ";
    print(arr, size);

    bubbleSort(arr, size);

    cout << "..:: Sorted array\t: ";   
    print(arr, size);

    return 0;
}
