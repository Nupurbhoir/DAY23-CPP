#include <iostream>
using namespace std;

int main() {
    int age;

    // Get user input
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0) {
            throw (age);
        } else if (age >= 18) {
            cout << "Access granted - you are old enough";
        } else {
            throw (age);
        }
    }

    catch (int myNum) {
        if (myNum < 0) {
            cout << "Invalid age. Please enter a non-negative age.";
        } else {
            cout << "Access denied - you must be at least 18 years old.\n";
            cout << "Age is: " << myNum;
        }
    }

    return 0;
}