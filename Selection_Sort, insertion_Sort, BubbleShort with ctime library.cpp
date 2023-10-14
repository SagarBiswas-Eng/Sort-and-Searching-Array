#include <iostream>
#include <ctime>

using namespace std;

// Selection Sort function
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Insertion Sort function
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void PrintArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {23, 45, 12, 9, 56, 34, 87, 61, 5, 32, 78, 6, 89, 18, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Record start time for Selection Sort.
    clock_t startTime = clock();
    selectionSort(arr, n);
    clock_t endTime = clock();
    double selectionSortTime = double(endTime - startTime) / CLOCKS_PER_SEC;

    // Display sorted array and execution times.
    cout << "..:: Sorted Array using Selection Sort: ";
    PrintArr(arr, n);
    cout << "\n--> Execution Time for Selection Sort: " << selectionSortTime << " seconds\n" << endl;

        /* ____________________________*/

    // Reset array to its original unsorted state.
    int unsortedArr[] = {23, 45, 12, 9, 56, 34, 87, 61, 5, 32, 78, 6, 89, 18, 67};

    // Record start time for Insertion Sort.
    startTime = clock();
    insertionSort(unsortedArr, n);
    endTime = clock();
    double insertionSortTime = double(endTime - startTime) / CLOCKS_PER_SEC;

    // Display sorted array and execution times.
    cout << "\n..:: Sorted Array using Insertion Sort: ";
    PrintArr(unsortedArr, n);
    cout << "\n--> Execution Time for Insertion Sort: " << insertionSortTime << " seconds\n" << endl;

        /* ____________________________*/

    // Reset array again to its original unsorted state.
    int unsortedArr2[] = {23, 45, 12, 9, 56, 34, 87, 61, 5, 32, 78, 6, 89, 18, 67};

    // Record start time for Bubble Sort.
    startTime = clock();
    bubbleSort(unsortedArr2, n);
    endTime = clock();
    double bubbleSortTime = double(endTime - startTime) / CLOCKS_PER_SEC;

    // Display sorted array and execution times.
    cout << "\n..::Sorted Array using Bubble Sort: ";
    PrintArr(unsortedArr2, n);
    cout << "\n--> Execution Time for Bubble Sort: " << bubbleSortTime << " seconds\n" << endl;

        /* ____________________________*/

    // Determining which sorting algorithm has the highest execution time.
    if (selectionSortTime > insertionSortTime && selectionSortTime > bubbleSortTime) {
        cout << "\n!).Selection Sort has the highest execution time." << endl;
    } else if (insertionSortTime > selectionSortTime && insertionSortTime > bubbleSortTime) {
        cout << "\n!).Insertion Sort has the highest execution time." << endl;
    } else {
        cout << "\n!). Bubble Sort has the highest execution time." << endl;
    }

    return 0;
}
