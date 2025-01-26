#include <stdio.h>
#include <string.h>

void countCharacters(const char *str) {
    int count[256] = {0}; // Assuming ASCII character set

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("The count of each character in the string \"%s\" is:\n", str);
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c\t%d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character

    countCharacters(str);

    return 0;
}