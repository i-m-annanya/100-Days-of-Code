//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person person;

    printf("Enter person's name: ");
    scanf("%s", person.name);

    printf("Enter person's gender (0 for Male, 1 for Female): ");
    scanf("%d", &person.gender);

    switch (person.gender) {
        case MALE:
            printf("Name: %s | Gender: Male\n", person.name);
            break;
        case FEMALE:
            printf("Name: %s | Gender: Female\n", person.name);
            break;
    }

    return 0;
}