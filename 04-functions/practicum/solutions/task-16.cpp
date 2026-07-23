// Да се напише функция getRemainder(int first, int second), която играе ролята на 
// оператор % (за делене с остатък), т.е. връща като резултат first % second.
// Не може да използвате оператор % за тази задача!
// Вход: 10 3,  Изход: 1

#include <iostream>

using namespace std;

int getRemainder(int first, int second) {
    while (first >= second) {
        first -= second;
    }

    return first;
}

int main() {
    int first, second;
    cin >> first >> second;

    if (second == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 1;
    }

    int remainder = getRemainder(first, second);
    cout << remainder << endl;

    return 0;
}
