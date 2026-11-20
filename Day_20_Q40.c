//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    int n, complement = 0, i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n % 10 == 0) {
            complement += 1 * (1 << i);
        }
        n /= 10;
        i++;
    }

    printf("1's complement is %d\n", complement);

    return 0;
}