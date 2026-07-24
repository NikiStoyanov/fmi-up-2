// Да се напише функция, която приема масив от цели числа и връща минимума и максимума на числата.
// Вход: [3, 1, 2, 8, 13, 5, 1, 6, 25],  Изход: Min: 1, Max: 25

#include <iostream>

using namespace std;

void findMinMax(int arr[], int size, int &min, int &max) {
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 1, 2, 8, 13, 5, 1, 6, 25};
    int size = 9;
    int min, max;

    findMinMax(arr, size, min, max);

    cout << "Min: " << min << ", Max: " << max << endl;

    return 0;
}