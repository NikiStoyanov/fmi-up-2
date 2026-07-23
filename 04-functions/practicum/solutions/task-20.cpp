// Да се напише функция, която приема число и го разделя на две числа, съставени съответно от 
// цифрите му на четна позиция и цифрите му на нечетна.
// Вход: 1234567,  Изход: 246 1357

#include <iostream>

using namespace std;

int reverse(int &num) {
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

void splitNumber(int number, int &evenDigits, int &oddDigits) {
    evenDigits = 0;
    oddDigits = 0;
    int position = 1;

    while (number > 0) {
        int digit = number % 10;

        if (position % 2 == 0) {
            evenDigits = evenDigits * 10 + digit;
        } else {
            oddDigits = oddDigits * 10 + digit;
        }

        number /= 10;
        position++;
    }

    evenDigits = reverse(evenDigits);
    oddDigits = reverse(oddDigits);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int evenDigits, oddDigits;
    splitNumber(number, evenDigits, oddDigits);

    cout << "Even position digits: " << evenDigits << endl;
    cout << "Odd position digits: " << oddDigits << endl;

    return 0;
}