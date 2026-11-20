//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *token;
    int i = 0;
    char initials[100] = "";

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = '\0';

    token = strtok(name, " ");
    while (token != NULL) {
        if (i == 0) {
            strcat(initials, token);
            strcat(initials, ".");
        } else if (strtok(NULL, " ") == NULL) {
            // This is the last token (surname)
            printf("%s ", token);
        } else {
            // This is a middle name
            strcat(initials, " ");
            strcat(initials, token);
            strcat(initials, ".");
        }
        i++;
        token = strtok(NULL, " ");
    }
    printf("%s\n", initials);

    return 0;
}