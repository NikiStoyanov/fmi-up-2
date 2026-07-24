// Да се напише функция, която приема 3 масива от цели числа - arr1, arr2 и result (който е празен), 
// като arr1 и arr2 са сортирани във възходящ ред. В края на функцията result трябва представлява 
// обединение на 2-та масива и е сортиран във възходящ ред. 
// Вход: [1, 5, 7, 8], [2, 3, 9], Изход: [1, 2, 3, 5, 7, 8, 9]

#include <iostream>

using namespace std;

void mergeSort(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
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
    int arr1[] = {1, 5, 7, 8};
    int size1 = 4;

    int arr2[] = {2, 3, 9};
    int size2 = 3;

    int result[7];

    mergeSort(arr1, size1, arr2, size2, result);

    cout << "Merged sorted array: ";
    printArray(result, size1 + size2);

    return 0;
}