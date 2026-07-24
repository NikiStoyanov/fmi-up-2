// Да се напише функция, която приема квадратна матрица с n на n елемента отпечатва главния диагонал, след това и второстепенния.

#include <iostream>

using namespace std;

void printMainDiagonal(int n, int matrix[][100]) {
    cout << "Main diagonal: ";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
}

void printSecondaryDiagonal(int n, int matrix[][100]) {
    cout << "Secondary diagonal: ";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][n - 1 - i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 3;
    int matrix[100][100] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printMainDiagonal(n, matrix);
    printSecondaryDiagonal(n, matrix);

    return 0;
}