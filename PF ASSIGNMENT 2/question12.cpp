#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

void findMinSumPair(int arr[], int n) {
    int minSum = INT_MAX;
    int pair1 = 0, pair2 = 0;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                pair1 = i;
                pair2 = j;
            }
        }
    }

    cout << "The Pair of elements whose sum is minimum are: [" << arr[pair1] << ", " << arr[pair2] << "]" << endl;
}

int main() {
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The given array is: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    findMinSumPair(arr, n);

    return 0;
}