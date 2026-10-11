
#include <iostream>
using namespace std;
// Assignment01 - Github Basics
// Student ID: L1S26BSCS0145
// Program to calculate the sum of first 50 natural numbers

int main() {
    int sum = 0;
    int n = 50;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    int formulaSum = n * (n + 1) / 2;

    cout << "Sum using loop = " << sum << endl;
    cout << "Sum using formula = " << formulaSum << endl;

    if (sum == formulaSum) {
        cout << "Verification successful!";
    } else {
        cout << "Verification failed!";
    }

    return 0;
}
