#include<iostream>
using namespace std;

int BinarySearch(int arr[], int left, int right, int key) {

    while (left <= right) { /// role of BST is -> "the value of left can never be greater than right."

        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;  // As long as the value of Right = 0. -> (mid-1). when arr[mid] is greater than the key.
        }
    }
    return -1;  // Searching from right to left, if the key is not there then it returns -1..[it means at -1 index].
}

int main() {
    int num[] = { 1, 3, 5, 7, 9, 11, 13, 15 };
    int numSize = sizeof(num) / sizeof(num[0]);
    int key[] = { 7, 17, 37, 42 };
    int keySize = sizeof(key) / sizeof(key[0]);


    for (int i = 0; i < keySize; i++) {
        int result = BinarySearch(num, 0, numSize - 1, key[i]);

        if (result != -1) {
            cout << "..:: The key " << key[i] << " found at the " << result << " number index." << endl;
        } else {
            cout << "..:: --> Key " << key[i] << " Not Found." << endl;
        }
    }

    return 0;
}
