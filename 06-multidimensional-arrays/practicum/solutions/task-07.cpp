// Дадена е матрица с размери M x N, [0 < N, M < 10]. 
// Напишете програма, която проверява дали всички диагонали от ляво на дясно са нарастващи.

#include <iostream>

using namespace std;

bool isDiagonalIncreasing(int rows, int cols, int matrix[][10]) {
    for (int startRow = 0; startRow < rows; ++startRow) {
        int prevValue = matrix[startRow][0];
        for (int i = 1; i < min(rows - startRow, cols); ++i) {
            if (matrix[startRow + i][i] <= prevValue) {
                return false;
            }
            prevValue = matrix[startRow + i][i];
        }
    }

    for (int startCol = 1; startCol < cols; ++startCol) {
        int prevValue = matrix[0][startCol];
        for (int i = 1; i < min(rows, cols - startCol); ++i) {
            if (matrix[i][startCol + i] <= prevValue) {
                return false;
            }
            prevValue = matrix[i][startCol + i];
        }
    }

    return true;
}

int main() {
    int rows = 3;
    int cols = 3;
    int matrix[10][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    if (isDiagonalIncreasing(rows, cols, matrix)) {
        cout << "All diagonals are increasing." << endl;
    } else {
        cout << "Not all diagonals are increasing." << endl;
    }

    return 0;
}