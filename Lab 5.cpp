// Created by Dabeer on 24/10/2025.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Size of the Pyramid: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int s = 0; s < n - i; ++s) cout << ' ';
        for (int j = 0; j < 2 * i - 1; ++j) cout << '*';
        cout << '\n';
    }
    return 0;
}
