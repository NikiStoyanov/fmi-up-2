// Дадена е квадратна матрица Х с размерност K x K и цяло число s. 
// Да се състави програма, която намира сумата от онези елементи на матрицата Х, сборът от индексите на които е равен на s.

#include <iostream>

using namespace std;

int sumElementsWithIndexSum(int k, int matrix[][100], int s) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (i + j == s) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int k = 3;
    int matrix[100][100] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int s = 2;

    int result = sumElementsWithIndexSum(k, matrix, s);
    cout << "Sum of elements with index sum " << s << ": " << result << endl;

    return 0;
}