#include <stdio.h>

int main() {
    int n, flag = 0;
    printf("\nEnter the number : ");
    scanf("%d", &n);

    for(int i=2 ; i<n ; i++) {
        if(n%i == 0) {
            flag = 0;
        } else {
            flag = 1;
        }
    }

    if (flag == 0) {
        printf("\n composite number.");
    } else {
        printf("\n prime number.\n");
    }
    
    return 0;
}