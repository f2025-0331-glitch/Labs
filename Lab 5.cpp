// Created by Dabeer on 24/10/2025.
//Question 1
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Size of the Pyramid: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++){ cout << " " ;}
        for (int k = 0; k < i ; k++){ cout << "* ";}
        cout << '\n';
    }
    return 0;
}