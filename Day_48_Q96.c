//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char *word;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character
    sentence[strcspn(sentence, "\n")] = '\0';

    word = strtok(sentence, " ");
    while (word != NULL) {
        // Reverse the current word
        int len = strlen(word);
        for (int i = 0; i < len / 2; i++) {
            char temp = word[i];
            word[i] = word[len - 1 - i];
            word[len - 1 - i] = temp;
        }
        printf("%s ", word);
        word = strtok(NULL, " ");
    }
    printf("\n");

    return 0;
}