/*Initialize TWO integer arrays A and B of different sizes. Make a new array with the common elements between A and B. Print the
new array element(s). If there is no common element, output “No common element!”.*/

#include<iostream>
using namespace std;

int main() {
    int A[6] = {1,2,3,4,5,6};
    int B[6] = {6,7,8,9,0,3};
    int size_A = sizeof(A) / sizeof(A[0]);
    int size_B = sizeof(B) / sizeof(B[0]);
    int C[size_A + size_B];
    int k = 0; // number of common elements...

    for(int i = 0; i < size_A; i++) {
        for(int j = 0; j < size_B; j++) {
            if(A[i] == B[j]) {
                C[k] = A[i];
                k++;
            }
        }
    }
    if(k == 0) {
        cout << "No common element!" << endl;
    } else {
        cout << "Those Array Have Common Elements \nPrint the new array element(s): ";
        for(int i = 0; i < k; i++){
            cout << C[i] << " ";
        }
    }
    return 0;
}
