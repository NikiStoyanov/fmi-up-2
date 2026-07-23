// Напишете функция swap, която разменя две числа. Да се напише за int и за double.
// Вход: 5 10,  Изход: 10 5

#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

int main() {
    int intA, intB;
    cout << "Enter two integers: ";
    cin >> intA >> intB;

    swap(intA, intB);
    cout << "Swapped integers: " << intA << " " << intB << endl;

    double doubleA, doubleB;
    cout << "Enter two doubles: ";
    cin >> doubleA >> doubleB;

    swap(doubleA, doubleB);
    cout << "Swapped doubles: " << doubleA << " " << doubleB << endl;

    return 0;
}