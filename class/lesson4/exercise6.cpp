#include <iostream>

using namespace std;

int main() {

    int pin = 1234;
    int attempts = 3;
    float money;
    float balance = 1000.00;
    int unlocked = false;

    do {
        if (unlocked) {
            int answer;
            cout << "1. Check Balance, 2. Deposit, 3. Withdraw, and 4. Exit." << endl;
            cin >> answer;
            switch (answer) {
                case 1:
                    cout << balance << endl;
                    break;
                case 2:
                    cout << "How much money do you want to deposit" << endl;
                    cin >> money;
                    balance += money;
                    break;
                case 3:
                    cout << "How much money do you want to withdraw" << endl;
                    cin >> money;
                    if (money > balance) {
                        cout << "You are not that rich buddy" << endl;
                    } else {
                        balance -= money;
                    }
                    break;
                case 4:
                    return 0;
                    break;
            }
        } else {
            int answer;
            cin >> answer;

            if (answer == pin) {
                unlocked = true;
            } else {
                cout << "Incorrect" << endl;
                attempts -= 1;
            }
        }
        
    } while (attempts > 0);

    cout << "You are locked out";

    return 0;
}