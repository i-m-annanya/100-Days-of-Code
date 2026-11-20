//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int main() {
    int nums[100], n, repeatedElement = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find the repeated element in one iteration
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]);
        if (nums[index] < 0) {
            repeatedElement = index;
            break;
        }
        nums[index] = -nums[index];
    }

    printf("The repeated element is: %d\n", repeatedElement);
    return 0;
}