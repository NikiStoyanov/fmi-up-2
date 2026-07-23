// Да се напише функция squareRootToLower(int number), която връща корен от number, закръглен надолу.
// Не може да използвате sqrt() за тази задача!
// Вход: 24,  Изход: 4

#include <iostream>

using namespace std;

int squareRootToLower(int number) {
    if (number < 0) {
        return -1;
    }

    int result = 0;
    while (result * result <= number) {
        result++;
    }

    return result - 1;
}

int main() {
    int number;
    cin >> number;

    int squareRoot = squareRootToLower(number);
    if (squareRoot != -1) {
        cout << squareRoot << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}