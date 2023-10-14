/*
Write a program to perform deletion of a value in the flowing scenario.
delete last value
delete value 5
delete first value
Given Array:  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
*/

#include <iostream>

using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10; // The initial size of the array

    // Display the original array
    cout << "Original Array: {";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    // Delete the last value
    n--;

    // Delete value 5
    for (int i = 0; i < n; i++) {
        if (arr[i] == 5) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            break; // Stop after the first occurrence of 5 is deleted
        }
    }

    // Delete the first value (element at index 0)
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    // Display the updated array
    cout << "Updated Array: {";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}
