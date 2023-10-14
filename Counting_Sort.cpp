#include <iostream>

using namespace std;

// Function to perform counting sort
void countingSort(int arr[], int size) {
    if (size <= 0) {
        return;
    }

    // Find the maximum element in the input array
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // Create a counting array with a size to accommodate all possible values
    int* count = new int[max_val + 1](); /*___*/
                                                                                                    /*
    // Create a counting array with a fixed size.
    int count[MAX_RANGE + 1] = {0};
                                                                                                    */
    // Count the occurrences of each element in the input array
    for (int i = 0; i < size; i++) {
        count[arr[i]]++; // increment count of the element. The count[A[i]]++ line of code is equivalent to count[arr[i]] = count[arr[i]] + 1.
    }
                                                                                                    /*
    count[arr[0]] = count[arr[0]] + 1;
    count[4]    = count[4] + 1;
    count[4]    = 0 + 1;
    count[4]    = 1;

    count[arr[1]] = count[arr[1]] + 1;
    count[2]    = count[2] + 1;
    count[2]    = 0 + 1;
    count[2]    = 1;

    count[arr[2]] = count[arr[2]] + 1;
    count[2]    = count[6] + 1;
    count[2]    = 1 + 1;
    count[2]    = 2;

    count[arr[3]] = count[arr[3]] + 1;
    count[8]    = count[8] + 1;
    count[8]    = 0 + 1;
    count[8]    = 1;
                                                        { count[4] = 1, count[2] = 1, count[2] = 2, count[8] = 1, count[3] = 1, count[3] = 2, count[1] = 1; } \\ { 4, 2, 2, 8, 3, 3, 1 }
    count[arr[4]] = count[arr[4]] + 1;
    count[3]    = count[3] + 1;
    count[3]    = 0 + 1;
    count[3]    = 1;

    count[arr[5]] = count[arr[5]] + 1;
    count[3]    = count[3] + 1;
    count[3]    = 1 + 1;
    count[3]    = 2;

    count[arr[6]] = count[arr[6]] + 1;
    count[1]    = count[1] + 1;
    count[1]    = 0 + 1;
    count[1]    = 1;
                                                                                                    */
    // Reconstruct the sorted array using the counting array
    int index = 0;
    for (int i = 0; i <= max_val; i++) {
        while (count[i] > 0) { // As long as the count[i] is grater then 0 the loop will continue. here the while loop is continue 2 times for count[2], count[3];
            arr[index] = i;
            index++;
            count[i]--; // count[i] = count[i] - 1;
        }
    }

    // Deallocate memory for the counting array
    delete[] count;
}

int main() {
    int arr[] = { 4, 2, 2, 8, 3, 3, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array\t: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    countingSort(arr, size);

    cout << "Sorted array\t: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
