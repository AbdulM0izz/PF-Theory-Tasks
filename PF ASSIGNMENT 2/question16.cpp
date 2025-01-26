#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // Calculate the number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Calculate the sum of the nth power of each digit
    for (int temp = num; temp != 0; temp /= 10) {
        int digit = temp % 10;
        sum += pow(digit, n);
    }

    return (sum == originalNum);
}

int main() {
    int num;

    cout << "Enter a decimal number: ";
    cin >> num;

    if (isArmstrongNumber(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}