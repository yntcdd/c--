#include <iostream>

using namespace std;

int main() {

    int total = 0;
    char keepgoing = 'y';

    do {
        int x;
        cout << "Give me a number yo" << endl;
        cin >> x;
        total += x;
        cout << "Your total is this yo:" << total << endl;

        cout << "Do you want to keep going yo?" << endl;
        cin >> keepgoing;
    } while (keepgoing == 'y');

    return 0;
}