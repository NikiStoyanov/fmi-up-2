// Да се напише функция, която приема матрица и отпечатва: 
// - най-голямото число;
// - най-малкото число;
// - средноаритметичното на всички числа;

#include <iostream>

using namespace std;

void findMin(int rows, int cols, int matrix[][100], int &min) {
    min = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
}

void findMax(int rows, int cols, int matrix[][100], int &max) {
    max = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
}

void calculateAverage(int rows, int cols, int matrix[][100], double &average) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    average = sum * 1.0 / (rows * cols);
}

int main() {
    int rows = 2;
    int cols = 3;
    int matrix[100][100] = {{1, 2, 3}, {4, 5, 6}};
    int min, max;
    double average;

    findMin(rows, cols, matrix, min);
    findMax(rows, cols, matrix, max);
    calculateAverage(rows, cols, matrix, average);

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Average: " << average << endl;

    return 0;
}