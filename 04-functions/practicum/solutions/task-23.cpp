// Да се състави програма, която по зададен интервал [K,L] (K и L цели положителни числа не по-големи от 100000) 
// отпечатва всички числа в интервала [K,L], които имат две съседни еднакви цифри в записа си.
// Вход: 60 120,  Изход: 66 77 88 99 100 110 111 112 113 114 115 116 117 118 119

#include <iostream>

using namespace std;

bool hasAdjacentEqualDigits(int number) {
    int previousDigit = -1;

    while (number > 0) {
        int currentDigit = number % 10;
        if (currentDigit == previousDigit) {
            return true;
        }
        previousDigit = currentDigit;
        number /= 10;
    }

    return false;
}

int main() {
    int K, L;
    cin >> K >> L;

    if (K <= 0 || L <= 0 || K > L || K > 100000 || L > 100000) {
        cout << "Invalid input" << endl;
        return 1;
    }

    for (int i = K; i <= L; i++) {
        if (hasAdjacentEqualDigits(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}