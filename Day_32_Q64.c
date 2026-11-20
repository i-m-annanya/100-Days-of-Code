//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    int number, digit, maxCount = 0, mostFrequentDigit = -1;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Count occurrences of each digit
    int count[10] = {0}; // Array to store counts of digits 0-9
    int temp = number;
    if (temp == 0) {
        count[0] = 1;
    }
    while (temp > 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // Find the digit with maximum occurrences
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);
    return 0;
}