// Имаме масив с дължина 5, който представя число по - малко от 10000. Пример: [0, 1, 1, 1, 2] -> 1112 
// Да се напише програма, която променя масива така, че числото записано в него да е с единица по - голямо.
// Вход: [0, 1, 0, 0, 9],  Изход: [0, 1, 0, 1, 0]

#include <iostream>

using namespace std;

void incrementNumber(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] < 9) {
            arr[i]++;
            return;
        } else {
            arr[i] = 0;
        }
    }
}

void printArray(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int arr[] = {0, 1, 0, 0, 9};
    int size = 5;

    incrementNumber(arr, size);

    cout << "Incremented number: ";
    printArray(arr, size);

    return 0;
}