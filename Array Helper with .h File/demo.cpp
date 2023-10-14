#include<iostream>
#include "ArrayHelper.h"

using namespace std;

int main() {
                            /*/// 2D Array /// */

    cout << " \t\t\t\t====== 1 Dimensional Array =======\t\t\t\t\n" << endl;
    int size;
    cout << "..::Enter the array size\t\t\t\t: ";
    cin >> size;
    cout << endl;

    //int array[size];
    int searchKey;
    int cpyArr[size];

    // Allocate memory for 1D array
    int* array = new int[size];

    /// Taking Input: 1D
    cout << "..::Enter the elements of the array\t\t\t: ";
    input1DArray(array, size);


    /// Printing array: 1D
    cout << "\n..::The original array is\t\t\t\t: ";
    print1DArray(array, size);


    /// Reversing array: 1D
    cout << "\n..::After reversing the array\t\t\t\t: ";
    reversePrint1DArray(array, size);


    /// Searching Element: 1D
    cout << "\n..::Enter the searching element\t\t\t\t: ";
    cin >> searchKey;

    int searchResult = searchIn1DArray(array, size, searchKey);
    if(searchResult != -1) {
        cout << "\n--> The searching element " << searchKey << " is found at " << searchResult << " number index." << endl;
    } else {
        cout << "\n--> Searching element " << searchKey << " is not found in the array. " << endl;
    }


    /// Maximum Number in the array: 1D
    int MAX = findMax1DArray(array, size);
    cout << "\n..::Maximum value of the array is\t\t\t: " << MAX << endl;


    /// Minimum Number in the array:
    int MIN = findMin1DArray(array, size);
    cout << "\n..::Minimum value of the array is\t\t\t: " << MIN << endl;


    /// Copying array to cpyArr:
    cout << "\n..::The Original array\t\t\t\t\t: ";
    print1DArray(array, size);
    copy1DArray(array, cpyArr, size);
    cout << "..::The Copied array\t\t\t\t\t: ";
    print1DArray(cpyArr, size);


    /// Sorting the array:
    cout << "\n..::After sorting the array\t\t\t\t: ";
    sort1DArray(array, size);
    print1DArray(array, size);

                            /*/// 2D Array /// */

    cout << "\n\n \t\t\t\t====== 2 Dimensional Array =======\t\t\t\t\n" << endl;
    int row, col;
    cout << "..::Enter the rows and columns number\t\t\t: ";
    cin >> row >> col;


    // Allocate memory for 2D array
    int **array2D = new int*[row];
    for(int i=0; i<row; i++) {
        array2D[i] = new int[col];
    }


/// Taking Input:
    cout << "..::Enter the elements of the 2D array\t\t\t: ";
    input2DArray(array2D, row, col);


/// Printing array:
    cout << "\n..::Printing original array\t\t\t\t: ";
    print2DArray(array2D, row, col);


/// Reversing array:
    cout << "\n..::Reversing the original array\t\t\t: ";
    reversePrint2DArray(array2D, row, col);


/// Searching Element:
    int searchkey;
    cout << "\n..::Enter the number for searching\t\t\t: ";
    cin >> searchkey;

    string result = searchIn2DArray(array2D, row, col, searchkey);
    cout << result;


/// Maximum Number in the array:
    int maxElement = findMax2DArray(array2D, row, col);
    cout << "\n..::The Maximum number of the array\t\t\t: " << maxElement << endl;


/// Minimum Number in the array:
    int minElement = findMin2DArray(array2D, row, col);
    cout << "\n..::The Minimum number of the array\t\t\t: " << minElement << endl;

/// Copying array to cpyArr2D:

    // Allocate memory for 2D array
    int **cpyArr2D = new int*[row];
    for(int i=0; i<row; i++) {
        cpyArr2D[i] = new int[col];
    }
    copy2DArray(array2D, cpyArr2D, row, col);
    cout << "\n..::Copied Array is\t\t\t\t\t: ";
    print2DArray(cpyArr2D, row, col);

    return 0;
}
