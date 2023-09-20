// Structure = A collection of values of different data types.
// Structures are stored in contiguous memory locations.
// Benefits of structure = saves us from creating too many variables.
                          // data management

#include <stdio.h>
#include <string.h>

// user defined

// array of structures = struct Student IT[100];
// Access = IT[0].cgpa = 7.8;

struct Student {
    int Roll;
    float cgpa;
    char name[100];
};

// passing structure to functions
void printInfo(struct Student s1);

int main() {
    // struct Student s1;
    // s1.Roll = 12;
    // s1.cgpa = 9.78;
    // // s1.name = "khushi";
    // strcpy(s1.name, "Khushi");

    // printf("Student name = %s\n", s1.name);
    // printf("Student roll= %d\n", s1.Roll);
    // printf("Student cgpa = %f\n", s1.cgpa);

    // Initializing structures
    // struct Student s1 = {12, 9.56, "Lauren"};
    // printf("Student roll= %d\n", s2.Roll);

    // Pointers to Structures
    // struct Student s1 = {12, 9.56, "Lauren"};
    // struct Student *ptr = &s1;
    // ptr = &s1;
    // printf("Student.name with dot = %s\n", (*ptr).name);   // (*ptr).Roll
    // printf("Student -> name with dot = %s\n", ptr -> name);
    // printf("\\n");

    // Arrow operator 
    // (*ptr).code  <-->  ptr -> code

    // struct Student ece[100];
    // ece[0].Roll = 12;
    // ece[0].cgpa = 9.78;
    // // s1.name = "khushi";
    // strcpy(ece[0].name, "Khushi");

    // printf("Student name = %s\n", ece[0].name);
    struct Student s1 = {12, 9.56, "Lauren"};
    printInfo(s1);

    return 0;
}


// call by value 
void printInfo(struct Student s1) {

    
    struct Student *ptr = &s1;
    ptr = &s1;

    printf("Student.name with dot = %s\n", (*ptr).name);   // (*ptr).Roll
    printf("Student -> name with dot = %s\n", ptr -> name);
    printf("\\n");
}