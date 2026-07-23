// Подава се секретно число с точно определена големина и играчът трябва да го познае. Играта приключва, когато играчът има 4 бика.
// Секретното число е съставено само от уникални цифри и неговата дължина се знае предварително (валидация на входа)
// Бикове са такива цифри, които съвпадат с цифра от секретното число
// Крави са такива цифри, които съществуват в секретното число, но не са на правилните си позиции
// Вход: 3578 2518,  Изход: Bulls: 2 Cows: 0
// Вход: 3578 3517,  Изход: Bulls: 2 Cows: 1
// Вход: 3578 5387,  Изход: Bulls: 0 Cows: 4
// Вход: 3578 3578,  Изход: Bulls: 4 Cows: 0

#include <iostream>

using namespace std;

bool isSecretValid(int secret) {
    if (secret < 1000 || secret > 9999) {
        return false;
    }

    for (int d = 0; d <= 9; d++) {
        int count = 0;
        int temp = secret;
        while (temp > 0) {
            if (temp % 10 == d) {
                count++;
            }
            temp /= 10;
        }
        if (count > 1) {
            return false;
        }
    }

    return true;
}

int countBulls(int secret, int guess) {
    int bulls = 0;
    while (secret > 0 && guess > 0) {
        if (secret % 10 == guess % 10) {
            bulls++;
        }
        secret /= 10;
        guess /= 10;
    }
    return bulls;
}

int countCows(int secret, int guess) {
    int cows = 0;
    
    for (int d = 0; d <= 9; d++) {
        int secretCount = 0, guessCount = 0;
        int tempSecret = secret, tempGuess = guess;

        while (tempSecret > 0) {
            if (tempSecret % 10 == d) {
                secretCount++;
            }
            tempSecret /= 10;
        }

        while (tempGuess > 0) {
            if (tempGuess % 10 == d) {
                guessCount++;
            }
            tempGuess /= 10;
        }

        cows += min(secretCount, guessCount);
    }

    return cows;
}

void playGame(int secret) {
    cout << "Welcome to the Bulls and Cows game!" << endl;
    int attempts = 0;
    for (int d = 0; d <= 50; d++) {
        cout << endl;
    }
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;

    while (true) {
        attempts++;
        if (guess == secret) {
            cout << "Bulls: 4 Cows: 0" << endl;
            break;
        }

        int bulls = countBulls(secret, guess);
        int cows = countCows(secret, guess) - bulls;

        cout << "Bulls: " << bulls << " Cows: " << cows << endl;

        cout << "Enter your next guess: ";
        cin >> guess;
    }

    cout << "Congratulations! You've guessed the secret number!" << endl;
    cout << "Number of attempts: " << attempts << endl;
}

int main() {
    int secret;
    cout << "Enter the secret number (4 unique digits): ";
    cin >> secret;

    if (!isSecretValid(secret)) {
        cout << "Invalid secret number. It must be a 4-digit number with unique digits." << endl;
        return 1;
    }

    playGame(secret);
    return 0;
}