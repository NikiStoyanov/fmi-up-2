// Да се състави програма, която въвежда от клавиатурата три цели числа m, n и k и 
// извежда всички числа в интервала [m,n] (0 < m < n <= 1000000), за които средното 
// аритметично от цифрите е по-голямо или равно на k (0 < k < 10).
// Вход: 10 50 6,  Изход: 39 48 49

#include <iostream>

using namespace std;

int getNumberOfDigits(int number) {
    int count = 0;
    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

int getDigitSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int m, n, k;
    cin >> m >> n >> k;

    if (m <= 0 || n <= 0 || m >= n || n > 1000000 || k <= 0 || k >= 10) {
        cout << "Invalid input" << endl;
        return 1;
    }

    for (int i = m; i <= n; i++) {
        int digitSum = getDigitSum(i);
        int numDigits = getNumberOfDigits(i);
        double average = digitSum * 1.0 / numDigits;

        if (average >= k) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}