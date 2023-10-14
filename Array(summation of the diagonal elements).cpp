// (d) Find the summation of the diagonal elements of a 2D array.

#include<iostream>
using namespace std;

int main() {

    int arr[4][4] = {{1,2,3,1},
                     {4,5,6,4},
                     {7,8,9,7},
                     {3,4,5,6}};

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < 4; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][3-i];
    }

    cout << "Sum of diagonal from top left to bottom right: " << sum1 << endl;
    cout << "Sum of diagonal from top right to bottom left: " << sum2 << endl;

    return 0;
}
