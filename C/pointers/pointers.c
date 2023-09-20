#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;        // * --> value at address
    int _age = *ptr;        // --> address of

    printf("%d\n", _age );
    printf("%d\n", age );
    printf("%d\n", *ptr );
    printf("%d\n", *(&age) );

    // Format specifiers 
    // "%p" = hexadecimal value
    // "%u" = unsigned int

    // in hexadceimal format
    printf("%p\n", &age);
    printf("%p\n", age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);


    // in unsigned int
    printf("%u\n", &age);
    printf("%u\n", age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);


    return 0;
}