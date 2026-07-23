// Напишете функция concat(unsigned int first, unsigned int second), която връща число, 
// получено при конкатенация (долепяне) на first и second.
// Вход: 123 456,  Изход: 123456

#include <iostream>

using namespace std;

unsigned int concat(unsigned int first, unsigned int second) {
    unsigned int temp = second;
    unsigned int multiplier = 1;

    while (temp > 0) {
        multiplier *= 10;
        temp /= 10;
    }

    return first * multiplier + second;
}

int main() {
    unsigned int first, second;
    cin >> first >> second;

    unsigned int result = concat(first, second);
    cout << result << endl;

    return 0;
}