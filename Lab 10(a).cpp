#include <iostream>
using namespace std;

void attemptWithdraw(int balance, int amount) {
    cout << "\nAttempting to withdrawing amount: ";
    cin >> amount;

    if (amount <= balance) {
        balance -= amount;
        cout << "The balance remaining is: " << balance << endl;
    } else {
        cout << "Withdrawal failed!" << endl;
    }
}

int main() {
    int balance, amount;
    cout<<"Enter the Balance: ";
    cin>>balance;
    attemptWithdraw(balance, amount);

    return 0;
}
