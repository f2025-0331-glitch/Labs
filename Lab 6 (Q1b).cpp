// Created by Dabeer on 31/10/2025.

#include <iostream>
using namespace std;
int main() {
    string password;
    bool correct = false;
    while (!correct) {
        cout << "Enter password: ";
        cin >> password;
        if (password == "Python123") {
            cout << "Correct Password" << endl;
            correct = true;
        }
        else {
            cout << "Wrong Password" << endl;
        }
    }
    return 0;
}