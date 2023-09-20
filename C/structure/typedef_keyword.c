// typedef keyword = used to create alias for data types.

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct computerEngineeringStudent {
    int roll;
    char name[100];
    float cgpa;
} coe;

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};


void takeAddress(struct address add); 
void printAddress(struct address add);

int main () {
    coe s1;
    s1.roll = 1098;
    
    s1.cgpa = 9;

    strcpy(s1.name, "khushi");
    printf("Student name is %s\n", s1.name);

    struct address adds[5];    // Array of structures
    printf("Enter house no. : ");
    scanf("%d", &adds[0].houseNo);       // taking values

    printf("Enter block no. : ");
    scanf("%d", &adds[0].block);

    printf("Enter city : ");
    scanf("%s", adds[0].city);

    printf("Enter state : ");
    scanf("%s", adds[0].state);

    // takeAddress(adds[1]);
    // takeAddress(adds[2]);
    printf("\n");

    printAddress(adds[1]);
    // printAddress(adds[2]);
    
    return 0;
}

void printAddress(struct address add) {
    printf("Address is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city , add.state);
}

void takeAddress(struct address adds) {

    printf("Enter house no. : ");
    scanf("%d", &adds.houseNo);       // taking values

    printf("Enter block no. : ");
    scanf("%d", &adds.block);

    printf("Enter city : ");
    scanf("%s", adds.city);

    printf("Enter state : ");
    scanf("%s", adds.state);
    
    return;
}

// code not working