#include <iostream>
using namespace std;

int diagonalSum(int matrix[3][3], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];  // Main diagonal
        if (i != n - i - 1)  // Add secondary diagonal if not the same element
            sum += matrix[i][n - i - 1];
    }
    return sum;
}

int main() {
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int n = 3;

    cout << "Sum of diagonals: " << diagonalSum(matrix, n) << endl;
    return 0;
}
