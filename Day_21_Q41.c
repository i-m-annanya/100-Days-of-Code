//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit, numDigits, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find the last digit
    lastDigit = n % 10;

    // Find the first digit
    firstDigit = n;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Find the number of digits
    numDigits = 0;
    i = n;
    while (i != 0) {
        i /= 10;
        numDigits++;
    }

    // Swap the first and last digits
    if (numDigits > 1) {
        n = (n - firstDigit * (int)(pow(10, numDigits - 1))) + lastDigit * (int)(pow(10, numDigits - 1));
        n = (n - lastDigit) + firstDigit;
    }

    printf("Number after swapping first and last digits is %d\n", n);

    return 0;
}