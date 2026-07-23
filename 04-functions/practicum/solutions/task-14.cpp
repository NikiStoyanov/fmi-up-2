// На конзолата се въвежда число N. След това се въвеждат N на брой цели числа. Намерете техният НОД и НОК. 
// Вход: 5 32 4 16 6 50,  Изход: GCD: 2, LCM: 2400

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input" << endl;
        return 1;
    }

    int num;
    cin >> num;
    int currentGCD = num;
    int currentLCM = num;

    for (int i = 1; i < N; ++i) {
        cin >> num;
        currentGCD = gcd(currentGCD, num);
        currentLCM = lcm(currentLCM, num);
    }

    cout << "GCD: " << currentGCD << ", LCM: " << currentLCM << endl;

    return 0;
}