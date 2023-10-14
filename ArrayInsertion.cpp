/*
Write a program to perform insert a value in the following scenario
Add 100 At the end of the array
At 200 in the index number 4
At 300 in the beginning of the array
*/

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10; // The initial size of the array

    // Display the original array
    cout << "Original Array: {";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }
    cout << "}" << endl;

    // Add 300 at the beginning of the array
    int newArr[11]; // Create a new array with one more element
    newArr[0] = 300;
    for (int i = 1; i <= n; i++) {
        newArr[i] = arr[i - 1];
    }
    n++;

    // Add 200 at index 4
    for (int i = n; i > 4; i--) {
        newArr[i] = newArr[i - 1];
    }
    newArr[4] = 200;
    n++;

    // Add 100 at the end of the array
    newArr[n] = 100;
    n++;

    // Display the updated array
    cout << "Updated Array: {";
    for (int i = 0; i < n; i++) {
        cout << newArr[i] << " ";
    }
    cout << "}" << endl;

    return 0;
}
