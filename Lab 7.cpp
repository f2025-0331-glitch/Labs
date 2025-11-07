#include <iostream>
using namespace std;

void menu() {
    cout << "\n1) Check Even/Odd";
    cout << "\n2) Count Digits";
    cout << "\n3) Sum of Digits";
    cout << "\n4) Check Prime";
    cout << "\n5) Exit";
    cout << "\nEnter your choice: ";
}

int getNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        cout << n << " is Even.\n";
    else
        cout << n << " is Odd.\n";
}

int countDigits(int n) {
    int count = 0;
    if (n == 0) return 1;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int sumDigits(int n) {
    int sum = 0;
    if (n < 0) n = -n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int choice, num;

    do {
        menu();
        cin >> choice;

        if (choice == 1) {
            num = getNumber();
            checkEvenOdd(num);
        }
        else if (choice == 2) {
            num = getNumber();
            cout << "Digits: " << countDigits(num) << endl;
        }
        else if (choice == 3) {
            num = getNumber();
            cout << "Sum of digits: " << sumDigits(num) << endl;
        }
        else if (choice == 4) {
            num = getNumber();
            if (isPrime(num))
                cout << num << " is Prime.\n";
            else
                cout << num << " is Not Prime.\n";
        }
        else if (choice == 5) {
            cout << "Goodbye!\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
