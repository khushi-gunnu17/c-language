// Variables are case sensitive.
// 1st character is alphabet ot '_'.
// no comma / blank space.
// no other symbol other than '_'.
// boolean and string datatype is not present in c
// 32 keywords in total
// C is a case sensitive language.

#include <stdio.h>      // Pre-processor directive

int main() {
    // int age = 22;
    // age = 24;
    // float pi = 3.14;
    // char hashtag = '#';

    // printf("Hello khushi\n");
    // printf("Hello khushi\n");
    // printf("Hello khushi\n");
    // printf("Hello khushi\n");

    // // Output
    // printf("Age is %d\n", age);               // Format specifiers
    // printf("value of pi is %f\n", pi);
    // printf("character is %c\n", hashtag);         

    // //Input
    // int num;
    // printf("Input the number here = ");
    // scanf("%d\n", &num);
    // printf("Number is %d\n", num);

    // sum of two numbers
    // int a, b;
    // printf("Enter a = ");
    // scanf("%d\n", &a);

    // printf("Enter a = ");
    // scanf("%d\n", &b);

    // int sum = a + b;
    // printf("Sum is = %d\n", sum);

    // area of a square
    float side;
    printf("Enter side : ");
    scanf("%f\n", &side);

    printf("Area is %f", side*side);

    return 0;
}