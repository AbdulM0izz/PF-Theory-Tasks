#include <iostream>
#include <limits.h>

using namespace std;

bool isIdentityMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == j && matrix[i][j] != 1) {
                return false;
            }
            if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void findMinMax(int matrix[3][3], int &min, int &max) {
    min = INT_MAX;
    max = INT_MIN;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
}

int main() {
    int matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    if (isIdentityMatrix(matrix)) {
        cout << "The matrix is an identity matrix." << endl;
    } else {
        cout << "The matrix is not an identity matrix." << endl;
    }

    int min, max;
    findMinMax(matrix, min, max);
    cout << "Minimum number in the matrix: " << min << endl;
    cout << "Maximum number in the matrix: " << max << endl;

    return 0;
}