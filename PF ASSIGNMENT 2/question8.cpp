#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size and elements of the first array
    cout << "Input the number of elements to be stored in the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Input " << n1 << " elements in the array:" << endl;
    for (int i = 0; i < n1; i++) {
        cout << "element - " << i << " : ";
        cin >> arr1[i];
    }

    // Input size and elements of the second array
    cout << "Input the number of elements to be stored in the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Input " << n2 << " elements in the array:" << endl;
    for (int i = 0; i < n2; i++) {
        cout << "element - " << i << " : ";
        cin >> arr2[i];
    }

    // Merging both arrays
    int mergedArray[n1 + n2];
    for (int i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = arr2[i];
    }

    // Sorting the merged array in descending order
    for (int i = 0; i < n1 + n2 - 1; i++) {
        for (int j = i + 1; j < n1 + n2; j++) {
            if (mergedArray[i] < mergedArray[j]) {
                int temp = mergedArray[i];
                mergedArray[i] = mergedArray[j];
                mergedArray[j] = temp;
            }
        }
    }

    // Counting the frequency of duplicate elements
    int duplicateCount = 0;
    for (int i = 0; i < n1 + n2 - 1; i++) {
        if (mergedArray[i] == mergedArray[i + 1]) {
            duplicateCount++;
        }
    }

    // Printing the merged array
    cout << "The merged array in descending order is:" << endl;
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    // Printing the count of duplicate numbers
    cout << "Total number of duplicate elements found in the array is: " << duplicateCount << endl;

    return 0;
}
