//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char temp[200];
    int i, j, found = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcat(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the concatenated string
    for (i = 0; i < strlen(temp) - strlen(str2) + 1; i++) {
        found = 1;
        for (j = 0; j < strlen(str2); j++) {
            if (temp[i + j] != str2[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not rotation\n");
    return 0;
}