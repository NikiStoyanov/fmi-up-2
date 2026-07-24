// Дадена е правоъгълна матрица A с размери M x N, съставена от цели числа. 
// Дадени са числата P и Q [0 < P < N, 0 < Q < M]. 
// Намерете най-голямата сума, съставена от подматрица на А с размери P x Q.

#include <iostream>

using namespace std;

int maxSubmatrixSum(int rows, int cols, int matrix[][100], int p, int q) {
    int maxSum = INT_MIN;

    for (int i = 0; i <= rows - q; ++i) {
        for (int j = 0; j <= cols - p; ++j) {
            int currentSum = 0;
            for (int x = 0; x < q; ++x) {
                for (int y = 0; y < p; ++y) {
                    currentSum += matrix[i + x][j + y];
                }
            }
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    return maxSum;
}

int main() {
    int rows = 4;
    int cols = 5;
    int matrix[100][100] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    int p = 2;
    int q = 2;

    int result = maxSubmatrixSum(rows, cols, matrix, p, q);
    cout << "Maximum sum of a " << p << "x" << q << " submatrix: " << result << endl;

    return 0;
}