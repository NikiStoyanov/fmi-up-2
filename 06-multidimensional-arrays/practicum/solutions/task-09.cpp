// Да се състави програма, която проверява дали матрица е симетрична.

#include <iostream>

using namespace std;

bool isSymmetric(int rows, int cols, int matrix[][100]) {
    if (rows != cols) {
        return false;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int rows = 3;
    int cols = 3;
    int matrix[100][100] = {{1, 2, 3}, {2, 5, 6}, {3, 6, 9}};

    if (isSymmetric(rows, cols, matrix)) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}