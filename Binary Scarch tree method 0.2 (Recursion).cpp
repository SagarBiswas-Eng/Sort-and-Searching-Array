#include<iostream>
using namespace std;

class Recursion {

public:
    Recursion() {};

    int BinarySearch(int num[], int left, int right, int key) {
        if(left > right) { /// role of BST is -> "the value of left can never be greater than right."
            return -1;
        }
        int mid = (left+right)/2;

        if(key == num[mid]) {
            return mid;
        }
        if(key < num[mid]) {
            return BinarySearch(num, left, mid-1, key); /// As long as the value of left = 0. -> (mid-1).
        }
        if(key > num[mid]) {
            return BinarySearch(num, mid+1, right, key);
        }
    }
};

int main() {
    Recursion R1;
    int n = 10;
    int num[n] = {11,22,33,44,55,66,77,88,99,100};
    int key = 11;
    cout << R1.BinarySearch(num, 0, n-1, key) << endl;

    return 0;
}

/// C++ stored data like a stack.
