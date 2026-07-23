// Да се напише функция reverse(int num), която връща даденото число наобратно.
// Вход: 102478,  Изход: 874201

#include <iostream>

using namespace std;

int reverse(int num) {
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num;
    cin >> num;

    int reversed = reverse(num);
    cout << reversed << endl;

    return 0;
}