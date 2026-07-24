// Да се състави програма, която установява дали масивът съдържа изцяло различни елементи.
// Всеки елемент е цяло число между 0 и 30
// Вход: [7, 4, 3, 5, 7, 8, 10],  Изход: false
// Вход: [7, 4, 3, 5, 20, 8, 10], Изход: true

#include <iostream>

using namespace std;

bool hasAllUniqueElements(int arr[], int size) {
    bool seen[31] = {false};

    for (int i = 0; i < size; i++) {
        if (seen[arr[i]]) {
            return false;
        }
        seen[arr[i]] = true;
    }

    return true;
}

int main() {
    int arr1[] = {7, 4, 3, 5, 7, 8, 10};
    int size1 = 7;

    int arr2[] = {7, 4, 3, 5, 20, 8, 10};
    int size2 = 7;

    cout << boolalpha;
    cout << "Array 1 has all unique elements: " << hasAllUniqueElements(arr1, size1) << endl;
    cout << "Array 2 has all unique elements: " << hasAllUniqueElements(arr2, size2) << endl;

    return 0;
}