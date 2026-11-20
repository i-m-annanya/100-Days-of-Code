//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student;

    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter student's roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter student's marks: ");
    scanf("%f", &student.marks);

    printf("Name: %s | Roll: %d | Marks: %.2f\n", student.name, student.roll_no, student.marks);

    return 0;
}