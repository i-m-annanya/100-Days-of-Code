//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[3];
    int i;
    int max_index = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (i = 1; i < 3; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    printf("Topper: %s (Marks: %.2f)\n", students[max_index].name, students[max_index].marks);

    return 0;
}