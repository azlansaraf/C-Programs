#include <stdio.h>

void main() {
    char str[20];
    int i, vowels, consonants, digits, spaces, symbols;

    vowels = consonants = digits = spaces = symbols = 0;

    printf("Enter the string (max 19 characters):\n");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove newline character if present
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
        }

        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                consonants++;
            } else if (str[i] >= '0' && str[i] <= '9') {
                digits++;
            } else if (str[i] == ' ') {
                spaces++;
            } else {
                symbols++;
            }
        }

        printf("\nVowels: %d", vowels);
        printf("\nConsonants: %d", consonants);
        printf("\nDigits: %d", digits);
        printf("\nSpaces: %d", spaces);
        printf("\nSymbols: %d", symbols);
    } else {
        printf("Error reading input.");
    }

}
