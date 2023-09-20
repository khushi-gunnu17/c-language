// When a function calls itself, it's called a recursion.

/*  Properties of recursion
    1. Anything that can be done with iteration , can be done with recursion and vice - versa.
    2. Recursion can sometimes give the most simple solution.
    3. Base Case is the condition which stops recursion.
    4. Iteration has infinite loop and recursion has stack overflow.
*/

#include <stdio.h>
#include <math.h>

void printHello(int count);

int main() {
    printHello(10);
    return 0;
}

// Recursive function
void printHello(int count) {
    if(count == 0) {            // Base case
        return;
    }

    printf("Hello !!\n");
    printHello(count - 1);
}
