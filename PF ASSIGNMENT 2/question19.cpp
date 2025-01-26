#include <iostream>

using namespace std;

void table() {
    int arr[5];

    // Taking input from the user
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    // Printing the multiplication table for each number
    for (int i = 0; i < 5; ++i) {
        cout << "Multiplication table for " << arr[i] << ":\n";
        for (int j = 1; j <= 10; ++j) {
            cout << arr[i] << " x " << j << " = " << arr[i] * j << endl;
        }
        cout << endl;
    }
}

int main() {
    table();
    return 0;
}