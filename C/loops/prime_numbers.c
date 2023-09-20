// print prime numbers fron 1 to n

#include <stdio.h>

int checkPrime(int n) {

    for(int i=2 ; i<n ; i++) {
        if(n%i == 0) {
        return 0;
        }
    }
}

int main() {
    int n;
    printf("\nEnter the value upto : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        if(checkPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}