//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *token;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = '\0';

    token = strtok(name, " ");
    while (token != NULL) {
        printf("%c.", token[0]);
        token = strtok(NULL, " ");
    }
    printf("\n");

    return 0;
}