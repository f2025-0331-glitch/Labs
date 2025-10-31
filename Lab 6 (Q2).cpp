// Created by Dabeer on 31/10/2025.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter number:" << endl;
    cin>>n;
    if (n<=1) {
        cout<<"Enter a number bigger than 1"<<endl;
        goto EndofProgram;
    }
    for (int i=2; i<n/2; i++) {
        if (n%i==0) {
            cout<<n<<" is not a prime number "<<endl;
            break;
        }
    }
    EndofProgram:
    cout<<n<<" is a prime number"<<endl;
    return 0;
}
