#include <iostream>

using namespace std;

int main() {

    int year;
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "Ts is a leap year small guy";
    } else {
        cout << "Nah lil bro this isnt a leap year";
    }

    return 0;
}