//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    FILE *file;
    struct Student students[100];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student records
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Write student records to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(file);

    // Read student records from file and display
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %d", students[n].name, &students[n].roll, &students[n].marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", students[n].name, students[n].roll, students[n].marks);
        n++;
    }
    fclose(file);

    return 0;
}