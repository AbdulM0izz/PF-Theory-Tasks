#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;
    
    // Taking input for the nth term
    cout << "Input the value for the nth term: ";
    cin >> n;

    // While loop to calculate the sum of the series
    while (i <= n) {
        int term = i * i;  // Calculate square of i
        cout << i << "*" << i << " = " << term << endl;  // Print each term
        sum += term;  // Add the square to the sum
        i++;  // Move to the next number
    }

    // Print the total sum of the series
    cout << "The sum of the above series is: " << sum << endl;
    
    return 0;
}
