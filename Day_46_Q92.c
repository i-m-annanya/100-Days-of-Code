//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    int first_repeating = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
                if (str[i] == str[j]) {
                    printf("First repeating lowercase alphabet: %c\n", str[i]);
                    first_repeating = 1;
                    break;
                }
            }
            if (first_repeating) {
                break;
            }
        }
    }

    if (!first_repeating) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}