#include <iostream>
using namespace std;

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    
    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;

    int arr[n + 1];
    cout << "Input " << n << " elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << " : ";
        cin >> arr[i];
    }

    
    int newValue;
    cout << "Input the new value to be inserted: ";
    cin >> newValue;


    arr[n] = newValue;
    n++;

    
    sortDescending(arr, n);

    
    cout << "The array after inserting and sorting in descending order is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
