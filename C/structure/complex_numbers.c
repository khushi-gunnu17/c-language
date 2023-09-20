// Create a structure to store complex numbers.

#include <stdio.h>

struct complex {
    int real;
    int imag; 
};

typedef struct BankAccount{
    int Accountno;
    char name[100];
} acc ;

int main() {
    // struct complex c1;
    // struct complex c2;

    // c1.real = 3;
    // c1.imag = 4;

    // c2.real = 5;
    // c2.imag = 5;

    // printf("%d + i%d\n", c1.real, c1.imag);
    // printf("%d + i%d\n", c2.real, c2.imag);

    struct complex number1 = {4, 10};
    struct complex *ptr = &number1;
    printf("Real part : %d\n", ptr -> real);
    printf("imaginary part : %d\n", ptr -> imag);

    // acc acc1 = {12, "khushi"};
    // acc acc2 = {11, "Mansi"};

    acc acc1;
    acc acc2;

    scanf("%d", &acc1.Accountno);
    scanf("%s", acc1.name);

    printf("Account number is : %d\n", acc1.Accountno);
    printf("Name is : %s\n", acc1.name);

    return 0;
}