//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter %d elements for the first array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);

    int arr2[m];
    printf("Enter %d elements for the second array: ", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays
    int merged[n + m];
    for (i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < m; j++) {
        merged[i + j] = arr2[j];
    }

    printf("Merged array: ");
    for (i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}