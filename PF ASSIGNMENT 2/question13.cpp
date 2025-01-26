#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void analyzeString(const string &str) {
    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0, specialChars = 0, words = 0, digits = 0;
    bool inWord = false;

    for (char ch : str) {
        if (isalpha(ch)) {
            if (strchr("AEIOUaeiou", ch)) {
                vowels++;
            } else {
                consonants++;
            }
            if (isupper(ch)) {
                uppercase++;
            } else {
                lowercase++;
            }
            inWord = true;
        } else if (isdigit(ch)) {
            digits++;
            inWord = true;
        } else {
            if (inWord) {
                words++;
                inWord = false;
            }
            if (!isspace(ch)) {
                specialChars++;
            }
        }
    }

    if (inWord) {
        words++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Special characters: " << specialChars << endl;
    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    analyzeString(str);

    return 0;
}#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void analyzeString(const string &str) {
    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0, specialChars = 0, words = 0, digits = 0;
    bool inWord = false;

    for (char ch : str) {
        if (isalpha(ch)) {
            if (strchr("AEIOUaeiou", ch)) {
                vowels++;
            } else {
                consonants++;
            }
            if (isupper(ch)) {
                uppercase++;
            } else {
                lowercase++;
            }
            inWord = true;
        } else if (isdigit(ch)) {
            digits++;
            inWord = true;
        } else {
            if (inWord) {
                words++;
                inWord = false;
            }
            if (!isspace(ch)) {
                specialChars++;
            }
        }
    }

    if (inWord) {
        words++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Special characters: " << specialChars << endl;
    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    analyzeString(str);

    return 0;
}