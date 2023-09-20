// only incrementation and decrementation is possible on pointers, i.e. add and sub.
// We can also subtract one pointer from another.
// We can also compare two pointers.

// the differnce or plus which comes in these values are of data types.

#include <stdio.h>

int main() {
    // int age = 22;
    // int *ptr = &age;

    
    // char star = '*';
    // char *ptr = &star;

    // printf("ptr = %u\n", ptr);
    // ptr++;    // it will change the memory location of the pointer which it is pointing to.
    // printf("ptr = %u\n", ptr);
    // ptr--;
    // printf("ptr = %u\n", ptr);


    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Number 1 address = %u, Number 2 address = %u\n", ptr, _ptr);
    printf("Differnce = %u\n", ptr - _ptr);

    _ptr = &age;
    printf("Comparison = %u\n", ptr == _ptr);

    return 0;
}