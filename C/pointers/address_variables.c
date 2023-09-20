#include <stdio.h>

void printAddress(int n);
void _printAddress(int *n);

int main() {
    int n = 4;

    printf("%p\n", &n);
    printAddress(n);

    printf("%p\n", &n);
    _printAddress(&n);

    return 0;
}

// Call by value = value is being copied here.
void printAddress(int n) {
    printf("%p\n", &n);
    return;
}

void _printAddress(int *n) {
    printf("%p\n", n);      // didn't understand this part
    return;
}