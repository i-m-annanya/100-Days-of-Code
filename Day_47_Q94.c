//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char longest_word[100] = "";
    char *word;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove newline character
    sentence[strcspn(sentence, "\n")] = '\0';
    
    word = strtok(sentence, " ");
    while (word != NULL) {
        if (strlen(word) > strlen(longest_word)) {
            strcpy(longest_word, word);
        }
        word = strtok(NULL, " ");
    }
    
    printf("Longest word: %s\n", longest_word);
    
    return 0;
}