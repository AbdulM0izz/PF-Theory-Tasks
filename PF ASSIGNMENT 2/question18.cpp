#include <iostream>
#include <cmath>

using namespace std;

// First UDF: Draws the multiplication table of an integer
void solve(int num) {
    cout << "Multiplication table of " << num << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Second UDF: Computes the sum of squares of three float values
void solve(float a, float b, float c) {
    float sumOfSquares = a * a + b * b + c * c;
    cout << "Sum of squares: " << sumOfSquares << endl;
}

// Third UDF: Computes the average of four integer values and returns it
float solve(int a, int b, int c, int d) {
    float average = (a + b + c + d) / 4.0;
    return average;
}

// Function template for solving part (2) with three integer values and three float values
template <typename T>
void solve(T a, T b, T c) {
    T sumOfSquares = a * a + b * b + c * c;
    cout << "Sum of squares (template): " << sumOfSquares << endl;
}

int main() {
    // First UDF
    solve(5);

    // Second UDF
    solve(1.2f, 2.3f, 3.4f);

    // Third UDF
    float avg = solve(10, 20, 30, 40);
    cout << "Average: " << avg << endl;

    // Function template with three integer values
    solve(3, 4, 5);

    // Function template with three float values
    solve(1.1f, 2.2f, 3.3f);

    return 0;
}