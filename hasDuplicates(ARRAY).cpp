#include <iostream>
using namespace std;

// define a class to handle array operations
class ArrayHandler {
private:
    int* arr; // pointer to array
    int size; // size of array

public:
    // constructor to initialize array and size
    ArrayHandler(int* arr, int size) {
        this->arr = arr;
        this->size = size;
    }

    // method to remove duplicates from array
    void removeDuplicates() {
        bool hasDuplicates = false; // flag to check for duplicates

        // check for duplicates in the array
        for (int i = 0; i < size; i++) {
            for (int j = i+1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    hasDuplicates = true;
                    break;
                }
            }
            if (hasDuplicates) {
                break;
            }
        }

        // remove duplicates (if any) using nested loops
        if (hasDuplicates) {
            for (int i = 0; i < size; i++) {
                for (int j = i+1; j < size; j++) { // [i] --> {(1),(2),(3),(4),(5),(6),(7)} is chceking by [j] --> {(1,2,3,4,5,6,7)} number index. 
                    if (arr[i] == arr[j]) { // Ex: arr[2] == arr[6];
                        for (int k = j; k < size-1; k++) { //if k = {arr[6] or arr[j]} then k = arr[6+1].
                            arr[k] = arr[k+1];
                        }
                        size--; // decrease array size
                        j--;
                    }
                }
            }
            cout << "Duplicates removed! Updated array:\n";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
        }
        else {
            cout << "Array already unique!";
        }
    }
};

// main function to initialize array and call ArrayHandler methods
int main() {
    const int size = 7; // size of array
    int arr[size] = {1, 2, 3, 1, 5, 6, 7}; // initialize array with more than 5 elements

    // create ArrayHandler object and call removeDuplicates method
    ArrayHandler ah(arr, size);
    ah.removeDuplicates();

    return 0;
}
