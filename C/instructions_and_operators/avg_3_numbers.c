#include <stdio.h>

int main() {
    int a,b,c, avg;
    printf("\nEnter the value of a : ");
    scanf("%d", &a);

    printf("\nEnter the value of b : ");
    scanf("%d", &b);

    printf("\nEnter the value of c : ");
    scanf("%d", &c);

    avg = (a + b + c)/3;
    printf("\nThe avg of the no. is = %d", avg);
    return 0;
}