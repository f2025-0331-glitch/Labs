// Created by Dabeer on 26/11/2025

#include <iostream>
using namespace std;
int getTotalSteps() {
    int steps, total = 0;
    for (int i = 1; i <= 7; i++) {
        cout<<"Enter your Steps "<<i<<": ";
        cin>>steps;
        total += steps;
    }
    return total;
}
int main() {
    int steps, total;
    float Average;
    steps = getTotalSteps();
    Average = steps / 7;
    cout<<"Total Steps = "<<steps<<endl;
    cout<<"Average = "<<Average<<endl;
    return 0;
}