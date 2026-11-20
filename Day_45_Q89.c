//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int frequency = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) {
            frequency++;
        }
    }

    printf("Frequency of '%c' in the string: %d\n", ch, frequency);

    return 0;
}