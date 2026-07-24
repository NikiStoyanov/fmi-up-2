// Да се напише програма, която намира сумата на елементите под главния диагонал и 
// сумата на елементите над главния диагонал, заедно с него.

#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[100][100] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sumBelowDiagonal = 0;
    int sumAboveDiagonal = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i > j) {
                sumBelowDiagonal += matrix[i][j];
            } else {
                sumAboveDiagonal += matrix[i][j];
            }
        }
    }

    cout << "Sum of elements below the main diagonal: " << sumBelowDiagonal << endl;
    cout << "Sum of elements above the main diagonal (including it): " << sumAboveDiagonal << endl;

    return 0;
}