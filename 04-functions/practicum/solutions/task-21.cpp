// Да се напише функция, която приема число n и индекси на цифри в него - i и j. 
// Програмата да променя n така, че накрая да е съставено само от цифрите от i-та до j-та позиция включително.
// Вход: 1234 1 2,  Изход: 23

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

void reverseNumber(int &n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    n = reversed;
}

int getSubNumber(int n, int i, int j) {
    int length = getLength(n);

    if (i < 0 || j >= length || i >= j) {
        return -1;
    }

    int subNumber = 0;
    for (int pos = 0; pos < length; pos++) {
        int digit = n % 10;
        if (pos >= i && pos <= j) {
            subNumber = subNumber * 10 + digit;
        }
        n /= 10;
    }

    reverseNumber(subNumber);
    return subNumber;
}

int main() {
    int n, i, j;
    cin >> n >> i >> j;

    int result = getSubNumber(n, i, j);
    if (result != -1) {
        cout << result << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}