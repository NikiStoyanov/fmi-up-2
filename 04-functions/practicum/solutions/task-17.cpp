// Да се напише функция getDivision(int first, int second), която играе ролята на 
// оператор “/” (за целочислено делене), т.е. връща като резултат first / second.
// Не може да използвате оператор “/” за тази задача!
// Вход: 30 7,  Изход: 4

#include <iostream>

using namespace std;

int getDivision(int first, int second) {
    int quotient = 0;

    while (first >= second) {
        first -= second;
        quotient++;
    }

    return quotient;
}

int main() {
    int first, second;
    cin >> first >> second;

    if (second == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 1;
    }

    int divisionResult = getDivision(first, second);
    cout << divisionResult << endl;

    return 0;
}