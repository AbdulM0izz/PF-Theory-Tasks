#include <iostream>
#include <cstring>

using namespace std;

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; ++i) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

bool compareStrings(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    return str1[i] == '\0' && str2[i] == '\0';
}

int main() {
    char str1[] = "HelloWorld";
    char str2[100];

    cout << "Enter a string: ";
    cin.getline(str2, 100);

    if (compareStrings(str1, str2)) {
        cout << "The strings are similar." << endl;
    } else {
        cout << "The strings are not similar." << endl;
    }

    reverseString(str1);
    reverseString(str2);

    cout << "Reversed initialized string: " << str1 << endl;
    cout << "Reversed input string: " << str2 << endl;

    return 0;
}