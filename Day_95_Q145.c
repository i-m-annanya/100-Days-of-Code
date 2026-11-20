//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student students[3];
    struct Student topStudent;
    int i;

    // Input details for 3 students
    for (i = 0; i < 3; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Find the top student
    topStudent = students[0];
    for (i = 1; i < 3; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    // Output the top student's details
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topStudent.name, topStudent.roll, topStudent.marks);

    return 0;
}