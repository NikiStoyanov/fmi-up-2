// Да се напише функция, която проверява дали дадено число N се съдържа в дадена матрица.

#include <iostream>

using namespace std;

bool containsNumber(int rows, int cols, int matrix[][100], int number) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == number) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int rows = 2;
    int cols = 3;
    int matrix[100][100] = {{1, 2, 3}, {4, 5, 6}};
    int numberToFind = 5;

    if (containsNumber(rows, cols, matrix, numberToFind)) {
        cout << "The number " << numberToFind << " is present in the matrix." << endl;
    } else {
        cout << "The number " << numberToFind << " is not present in the matrix." << endl;
    }

    return 0;
}