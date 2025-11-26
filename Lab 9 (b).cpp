// Created by Dabeer on 26/11/2025.

#include <iostream>
using namespace std;

int restock(int currentStock , int addedStock) {
    return currentStock + addedStock;
}

int main() {
    int currentStock;

    cout<<"Enter the number of stocks added: ";
    cin>>currentStock;

    for(int day = 1; day <= 7; day++) {
        int addedStock;
        cout<<"Day " << day << ": Enter Stock added: ";
        cin>>addedStock;
        currentStock = restock(currentStock , addedStock);
        cout << "Stock added: "<< day << ":" << currentStock<<endl;
    }
    return 0;
}