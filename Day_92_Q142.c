//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nTabular list of all students:\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}