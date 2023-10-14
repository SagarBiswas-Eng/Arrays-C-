#ifndef ARRAY_HELPER_H
#define ARRAY_HELPER_H

#include <iostream>
#include <string>
using namespace std;

/// Printing Function: 1D
void print1DArray(int *array, int size) {

    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

/// Reverse Function: 1D
void reversePrint1DArray(int *array, int size) {

    for(int i = size-1; i >=0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;
}

/// Taking Input Function: 1D
void input1DArray(int *array, int size) {

    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

/// Element Searching Function: 1D
int searchIn1DArray(int *array, int size, int searchKey) {

    for(int i = 0; i < size; i++) {
        if(array[i] == searchKey) {
            return i;
        }
    }
    return -1;
}

/// Function For Finding MAX Value: 1D
int findMax1DArray(int *array, int size) {

    int maxValue = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] > maxValue) {
            maxValue = array[i];
        }
    }
    return maxValue;
}

/// Function For Finding MIN Value: 1D
int findMin1DArray(int *array, int size) {

    int minValue = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] < minValue) {
            minValue = array[i];
        }
    }
    return minValue;
}

/// Function For Copying 2 Array: 1D
void copy1DArray(int *sourceArray, int *destinationArray, int size) {

    for(int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[i];
    }
}

/// Ascending Order Sorting Function: 1D
void sort1DArray(int *array, int size) {

    for(int i = 0; i < size-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < size; j++) {
            if(array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

/// Printing Function: 2D
void print2DArray(int **array, int row, int col) {

    cout << "array[row][col] = { ";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
    }
    cout << "};";
    cout << endl;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << endl;
            cout << "--> array[" << i << "]" << "[" << j << "]\t\t\t\t\t\t: ";
            cout << array[i][j];
        }
    }
    cout << endl;
}


/// Reverse Function: 2D
void reversePrint2DArray(int **array, int row, int col) {

    for(int i = row-1; i >= 0; i--) {
        for(int j = col-1; j >= 0; j--) {
            cout << array[i][j] << " ";
        }
    }
    cout << endl;
}


/// Taking Input Function: 2D
void input2DArray(int **array, int row, int col) {

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> array[i][j];
        }
    }
}


/// Element Searching Function: 2D
string searchIn2DArray(int **array,  int row, int col, int searchkey) {

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(array[i][j] == searchkey) {
                string indexAt = "--> Index Number of " + to_string(searchkey) + " is \t\t\t\t: array[" + to_string(i) +  "][" + to_string(j) + "]\n";
                return indexAt;
            }
        }
    }
    return "--> Searched number not found\n";
}


/// Function For Finding MAX Value: 2D
int findMax2DArray(int **array, int row, int col) {

    int maxValue = array[0][0];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(array[i][j] > maxValue) {
                maxValue = array[i][j];
            }
        }
    }
    return maxValue;
}


/// Function For Finding MIN Value: 2D
int findMin2DArray(int **array, int row, int col) {

    int minValue = array[0][0];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(array[i][j] < minValue) {
                minValue = array[i][j];
            }
        }
    }
    return minValue;
}


/// Function For Copying 2 Array: 2D
void copy2DArray(int **sourceArray, int **destinationArray, int row, int col) {

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            destinationArray[i][j] = sourceArray[i][j];
        }
    }
}


#endif // ARRAY_HELPER_H
