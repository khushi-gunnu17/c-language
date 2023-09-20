#include <stdio.h>

int main () {
    int n;
    
    do {
        printf("\nEnter a number = ");
        scanf("\n%d", &n);
        printf("%d", n);

        if(n%7 == 0) {
            break;
        }
    } while (1);

    printf("\nThank you !");
    return 0;
}