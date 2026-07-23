// Да се напише функция sortDigits(unsigned int number), която сортира цифрите на подадено число (в низходящ ред).
// Вход: 4791257,  Изход: 9775421
// Вход: 1000,  Изход: 1000


#include <iostream>

using namespace std;

int sortDigits(unsigned int n) {
    int sortedNumber = 0;

    for (int d = 9; d >= 0; d--) {
        int temp = n;

        while (temp > 0) {
            if (temp % 10 == d) {
                sortedNumber = sortedNumber * 10 + d;
            }
            temp /= 10;
        }
    }

    return sortedNumber;
}

int main() {
    unsigned int number;
    cout << "Enter a natural number: ";
    cin >> number;

    int sortedNumber = sortDigits(number);
    cout << "Sorted number: " << sortedNumber << endl;

    return 0;
}