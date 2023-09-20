// Make a program to input student information from a user and enter into a file

#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("practice2.txt", "w");
    char name[100];
    int age;
    float cgpa;

    printf("Enter the name : ");
    scanf("%s", name);

    printf("Enter age : ");
    scanf("%d", &age);

    printf("Enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name : %s\n", name);
    fprintf(fptr, "Student age : %d\n", age);
    fprintf(fptr, "Student cgpa : %f\n", cgpa);

    fclose(fptr);
    return 0;
}