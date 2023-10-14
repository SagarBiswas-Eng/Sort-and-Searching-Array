#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return i;
		}
		/*else {
			return -1; // This is the issue; it returns -1 on the first iteration if the target is not found.
		}*/
	}
	return -1;
}

int main() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 6;

	int position = linearSearch(arr, size, target);

	if (position != -1) {
		cout << "The Targeted Number Has Been Found At The Index Of: " << position << endl;
	}
	else {
		cout << "The Targeted Number Has Been NOT Found." << endl;
	}
	return 0;
}
