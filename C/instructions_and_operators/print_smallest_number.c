#include <stdio.h>

int main() {
    int x, y;
    printf("\nEnter the 1st number = ");
    scanf("%d", &x);

    printf("\nEnter the 2nd number = ");
    scanf("%d", &y);

    printf("\nThe smallest number is = %d", x>y ? y:x);         //Ternary operators

    return 0;
}