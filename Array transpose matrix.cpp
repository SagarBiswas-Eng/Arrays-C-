// (e) Find the transpose matrix of a 2D Array. int A[5][4], int A_Tr[4][5];

#include<iostream>
using namespace std;

int main() {

    int arr[5][4] = {
        {1,2,3,4},
        {1,6,9,7},
        {6,8,9,4},
        {4,2,3,1},
        {8,9,7,4}
    };
    int arrtr[4][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            arrtr[j][i] = arr[i][j];
        }
    }

    cout << "The transpose matrix: \n" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            cout << arrtr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
