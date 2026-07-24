// Напишете функция, която приема два масива от цели числа и проверява дали вторият масив е подмасив на първия.
// Вход: [1, 2, 3, 4], [1, 2, 3], Изход: true

#include <iostream>

using namespace std;

bool isSubarray(int arr1[], int size1, int arr2[], int size2) {
    if (size2 > size1) {
        return false;
    }

    for (int i = 0; i <= size1 - size2; i++) {
        bool match = true;
        for (int j = 0; j < size2; j++) {
            if (arr1[i + j] != arr2[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true;
        }
    }

    return false;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int size1 = 4;

    int arr2[] = {1, 2, 3};
    int size2 = 3;

    cout << boolalpha;
    cout << "Is arr2 a subarray of arr1? " << isSubarray(arr1, size1, arr2, size2) << endl;

    return 0;
}