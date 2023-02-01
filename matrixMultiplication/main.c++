#include <iostream>
using namespace std;
int main() {
    int a[10][10], b[10][10], matrix[10][10], r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Multiplication cannot be performed\n";
    }
    cout << "\nEnter elements of matrix 1:" << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << "\nEnter elements of matrix 2:\n";

    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            matrix[i][j] = 0;
        }
    }
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            for (k = 0; k < c1; ++k) {
                matrix[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "\nOutput Matrix: " << endl;
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            cout << matrix[i][j];
        }
        cout << "\n";
    }
    return 0;
}