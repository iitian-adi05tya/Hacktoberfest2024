#include <iostream>
using namespace std;

void spiralPrint(int matrix[3][3], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";
        right--;

        // Print bottom row if remaining
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << matrix[bottom][i] << " ";
            bottom--;
        }

        // Print left column if remaining
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";
            left++;
        }
    }
}

int main() {
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    cout << "Spiral order: ";
    spiralPrint(matrix, 3, 3);
    return 0;
}
