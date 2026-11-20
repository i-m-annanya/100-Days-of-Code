//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int maxLength = 0;
    int start = 0;
    int visited[256] = {0}; // Array to store the last seen index of each character

    printf("Enter a string: ");
    scanf("%s", s);

    for (int end = 0; s[end] != '\0'; end++) {
        if (visited[s[end]] > start) {
            start = visited[s[end]];
        }
        visited[s[end]] = end + 1;
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
        }
    }

    printf("Length of the longest substring without repeating characters is: %d\n", maxLength);
    return 0;
}