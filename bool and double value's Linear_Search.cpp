#include <iostream>
using namespace std;

class Week_3 {
public:

    bool linerSearch(int arr[], int size, int key, int index = 0) {
        bool found = false;
        if (index == size){
            return false;
        }
        if (arr[index] == key) {
            cout << "Key " << key << " found at index " << index << ". ";
            found = true;
        }
        bool foundInRest = linerSearch(arr, size, key, index + 1);
        return found || foundInRest;
    }
};

int main() {
    int arr[] = { 4, 5, 8, 1, 3, 5, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int keys[] = { 3, 6, 7, 8, 5 };
    int keysSize = sizeof(keys) / sizeof(keys[0]);

    Week_3 All;

    for (int i = 0; i < keysSize; i++) {
        cout << "Searching for " << keys[i] << " : ";
        bool found = All.linerSearch(arr, size, keys[i]);
        cout << endl;
        if (!found) {
            cout << "Key " << keys[i] << " Not Found." << endl;
        }
    }
    return 0;
}
