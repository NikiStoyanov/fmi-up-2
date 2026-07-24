// Дадена е матрица А с размер N x 2. Сортирайте редовете ѝ в нарастващ ред по първия елемент. 
// Ако първите елементи са равни, по вторите. Гарантирано е, че няма 2 напълно еднакви двойки.

#include <iostream>

using namespace std;

void swapRows(int row1[2], int row2[2]) {
    int temp0 = row1[0];
    int temp1 = row1[1];
    row1[0] = row2[0];
    row1[1] = row2[1];
    row2[0] = temp0;
    row2[1] = temp1;
}

void sortMatrix(int n, int matrix[][2]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (matrix[j][0] > matrix[j + 1][0] || 
                (matrix[j][0] == matrix[j + 1][0] && matrix[j][1] > matrix[j + 1][1])) {
                swapRows(matrix[j], matrix[j + 1]);
            }
        }
    }
}

int main() {
    int n = 5;
    int matrix[100][2] = {{3, 4}, {1, 2}, {3, 1}, {2, 5}, {1, 3}};

    sortMatrix(n, matrix);

    cout << "Sorted matrix:" << endl;
    for (int i = 0; i < n; i++) {
        cout << matrix[i][0] << " " << matrix[i][1] << endl;
    }

    return 0;
}