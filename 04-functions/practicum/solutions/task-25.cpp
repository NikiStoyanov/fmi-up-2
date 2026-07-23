// Да се напише функция void getLastShow(int n, unsigned int& maxHours, unsigned int& maxMins), която по 
// дадена програма на театър изчислява до колко часа продължава най-късното представление. 
// От конзолата се прочита цяло число n - броят на представленията, а на следващите n реда - 
// по 3 цели числа: час и минута на началото на представлението и продължителността му в минути. 
// Програмата извежда в колко часа приключва последното представление. 
// Приемаме, че никой вход няма да прехвърли денонощието!
// Вход: 
// 4
// 19 15 120
// 20 20 25
// 18 25 230
// 21 10 45

// Изход: 
// 22 15

#include <iostream>

using namespace std;


void getLastShow(int n, unsigned int& maxHours, unsigned int& maxMins) {
    maxHours = 0;
    maxMins = 0;

    for (int i = 0; i < n; ++i) {
        unsigned int startHour, startMin, duration;
        cin >> startHour >> startMin >> duration;

        unsigned int endHour = startHour + (startMin + duration) / 60;
        unsigned int endMin = (startMin + duration) % 60;

        if (endHour > maxHours || (endHour == maxHours && endMin > maxMins)) {
            maxHours = endHour;
            maxMins = endMin;
        }
    }
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input" << endl;
        return 1;
    }

    unsigned int maxHours, maxMins;
    getLastShow(n, maxHours, maxMins);

    cout << maxHours << " " << maxMins << endl;

    return 0;
}