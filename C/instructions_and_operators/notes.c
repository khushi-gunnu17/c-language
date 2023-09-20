/*
Arithmetic op
Relational op
Logical op
Ternary op
Assignment op
Bitwise op
*/

#include <stdio.h>
#include <math.h>

int main() {
/*    // Type declaration instructions
    int a = 2;
    int b = a;
    int c = b*4;
    int d = 1, e;

    // declare var before using it.
    int x,y,z;
    x=y=z=1;

    // int p=q=r=6;    // usage and declaration cannot take place at the same time

    int sum = a + b;
    // single var on the LHS.

    int power = pow(b,c);
    printf("%d\n", power);

    // modular op works for int only.

    printf("%d\n", -8%3);

    */


    // Type conversion

        /* int op int --> int
        float op int --> float
        float op float --> float*/

    // conversion = implicit and explicit

/*  printf("%d\n", 67 % 2 );
    printf("%f\n", 4.0 / 3);

    printf("%d\n", 3 / 2 );
    printf("%f\n", 3.5 / 2 );
    */

    // int a = (int) 1.99999999;        // implicit type conversion from doble to int is working here.

    // printf("%d\n", a);    

    // Operator Precedence
    // printf("%d\n", 4 + 9 * 10);

    // printf("%d\n", 4 * 3 / 6 * 2 );         // Associativity (for same precedence)

    // printf("%d\n", 5 + 2 / 2 * 3);


// Control instructions
// used to determine flow of program

    // int x,y=x;   // it's working here !!

    int x;
    printf("Enter a number : ");
    scanf("%d\n", &x);
    printf("%d\n", x>9 && x<100 );
    

    return 0;
}