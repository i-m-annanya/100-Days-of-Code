//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, found, anagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        anagram = 0;
    } else {
        // Check if each character in str1 exists in str2
        for (i = 0; str1[i] != '\0'; i++) {
            found = 0;
            for (j = 0; str2[j] != '\0'; j++) {
                if (str1[i] == str2[j]) {
                    found = 1;
                    str2[j] = '\0';  // Mark as used
                    break;
                }
            }
            if (!found) {
                anagram = 0;
                break;
            }
        }
    }

    if (anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}