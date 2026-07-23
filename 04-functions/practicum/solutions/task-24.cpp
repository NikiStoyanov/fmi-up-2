// Напишете програма, която по подадени 3 цели числа a, b и k прехвърля последните k цифри на a в началото на b.
// Вход: 1921 321 2,  Изход: 19 21321

#include <iostream>

using namespace std;

int getLength(int n) {
    int length = 0;
    while (n > 0) {
        length++;
        n /= 10;
    }
    return length;
}

int getLastKDigits(int n, int k) {
    int divisor = 1;
    for (int i = 0; i < k; i++) {
        divisor *= 10;
    }
    return n % divisor;
}

int removeLastKDigits(int n, int k) {
    int divisor = 1;
    for (int i = 0; i < k; i++) {
        divisor *= 10;
    }
    return n / divisor;
}

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    if (k < 0 || k > getLength(a)) {
        cout << "Invalid input" << endl;
        return 1;
    }

    int lastKDigits = getLastKDigits(a, k);
    a = removeLastKDigits(a, k);

    int multiplier = 1;
    for (int i = 0; i < getLength(b); i++) {
        multiplier *= 10;
    }

    b = lastKDigits * multiplier + b;

    cout << a << " " << b << endl;

    return 0;
}