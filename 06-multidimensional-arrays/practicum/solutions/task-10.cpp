// Да се напише функция, която:
//  - събира 2 матрици
//  - умножава 2 матрици

#include <iostream>

using namespace std;

void addMatrices(int rows, int cols, int matrix1[][100], int matrix2[][100], int result[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyMatrices(int rows1, int cols1, int matrix1[][100], int rows2, int cols2, int matrix2[][100], int result[][100]) {
    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied due to incompatible dimensions." << endl;
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows1 = 2, cols1 = 3;
    int matrix1[100][100] = {{1, 2, 3}, {4, 5, 6}};

    int rows2 = 2, cols2 = 3;
    int matrix2[100][100] = {{7, 8, 9}, {10, 11, 12}};

    int resultAdd[100][100];
    addMatrices(rows1, cols1, matrix1, matrix2, resultAdd);

    cout << "Result of addition:" << endl;
    printMatrix(rows1, cols1, resultAdd);

    int rows3 = 3, cols3 = 2;
    int matrix3[100][100] = {{1, 2}, {3, 4}, {5, 6}};

    int resultMultiply[100][100];
    multiplyMatrices(rows1, cols1, matrix1, rows3, cols3, matrix3, resultMultiply);

    cout << "Result of multiplication:" << endl;
    printMatrix(rows1, cols3, resultMultiply);

    return 0;
}