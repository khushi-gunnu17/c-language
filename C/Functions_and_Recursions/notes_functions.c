#include <stdio.h>

// Function Prototype/Declaration
void printHello();

void printGoodbye() {               // Both syntax works 
    printf("Good Bye !!\n");
}

void printTable(int n) {            // Parameter / Formal Parameter
    for(int i=1 ; i<=10; i++) {
        printf("%d\n", n*i);
    }
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("The final price is : %f\n", value);
    return;
}

// Function Call
int main() {
    printHello();
    printHello();
    printHello();

    printGoodbye();

    int n;
    printf("\nEnter a number : ");
    scanf("%d", &n);

    printTable(n);      // Argument / Actual parameters

    float value = 100.0;
    calculatePrice(value);
    printf("Value is : %f\n", value);

    // int n;
    // printf("Enter the number whose square is to be calculated : ");
    // scanf("%d", &n);

    // printf("the sqaure is : %f\n", pow(n,2));
    return 0;
}

// Function Definition
void printHello() {
    printf("Hello\n");
}



// Execution always starts from main.
// a function gets called directly or indirectly from main.
// There can be multiple functions in a program.
// Function can take some values (parameters) and give some value (return value).
// Function can only return one value at a time.
// Changing to parameters in function don't change the values in calling function. (Beacuse a copy of argument is passed to the function).


// Library function
// user-defined function

// Argument vs Parameter
/*  Values that are passed in function call.        Values in function decalaration and decalaration.
    Used to send value                              Used to receive value 
    Actual parameters                               Formal parameters           */
