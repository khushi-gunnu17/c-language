#include <stdio.h>

int main() {
    int n;
    printf("\nEnter the number : ");
    scanf("%d", &n);

    int sum =0;
    for(int j=n; j>0; j--) {
        sum += j;
        printf("%d\n", j);
    }
    printf("\nsum of the numbers is = %d", sum);

    // sum of numbers from 5 to 50 

    // int sum = 0;
    // for(int i=5; i<=50; i++) {
    //     sum += i;
    // }
    // printf("the sum of the numbers from 5 to 50 is %d", sum);

    return 0;
}