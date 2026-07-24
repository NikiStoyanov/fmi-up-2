// Да се напише функция isTriangular(const int mtx[][], size_t rows, size_t cols), която приема квадратна 
// матрица с n на n елемента и връща дали матрицата е триъгълна, т.е. под главния диагонал има само нули.

#include <iostream>

using namespace std;

bool isTriangular(const int mtx[][100], size_t rows, size_t cols) {
    if (rows != cols) {
        return false;
    }

    for (size_t i = 1; i < rows; ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (mtx[i][j] != 0) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[100][100] = {{1, 2, 3}, {0, 5, 6}, {0, 0, 9}};

    if (isTriangular(matrix, rows, cols)) {
        cout << "The matrix is triangular." << endl;
    } else {
        cout << "The matrix is not triangular." << endl;
    }

    return 0;
}