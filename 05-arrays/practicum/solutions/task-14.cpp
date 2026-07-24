// От конзолата се въвежда масив с N < 100 елемента, след това и N цели числа. 
// Числата са въведени по следния начин: поредица от четни числа, нула, поредица от нечетни числа. 
// Вашата задача е да напишете функция, която връща индекса на нулата (ако има такава в масива). 
// Считаме, че входа от конзолата е коректен. ЗАДАЧАТА ДА СЕ РЕШИ В ЛОГАРИТМИЧЕН БРОЙ СТЪПКИ (спрямо броят елементи на масива).
// Вход: [2 4 6 10 8 0 1 7 3 9],  Изход: 5
// Вход: [2 4 6 10 8 5 1 7 3 9], Изход: -1

#include <iostream>

using namespace std;

int findZeroIndex(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == 0) {
            return mid;
        } else if (arr[mid] % 2 == 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr1[] = {2, 4, 6, 10, 8, 0, 1, 7, 3, 9};
    int size1 = 10;

    int arr2[] = {2, 4, 6, 10, 8, 5, 1, 7, 3, 9};
    int size2 = 10;

    cout << "Index of zero in arr1: " << findZeroIndex(arr1, size1) << endl;
    cout << "Index of zero in arr2: " << findZeroIndex(arr2, size2) << endl;    

    return 0;
}