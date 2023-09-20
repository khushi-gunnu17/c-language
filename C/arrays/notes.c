// Arrays =  Collecttion of similar data types stored at contiguous memory locations.

#include <stdio.h>

int main() {
    // int marks[3];
    int marks[] = (2,3,4,5);
    // printf("english = ");
    // scanf("%d", &marks[0]);

    // printf("Maths = ");
    // scanf("%d", &marks[1]);

    // printf("Science = ");
    // scanf("%d", &marks[2]);

    // printf("english = %d, maths = %d, Science = %d", marks[0], marks[1], marks[2]);

    float price[3];
    printf("Enter 3 prices : ");
    for(int i=0; i<3 ; i++) {
        scanf("%f", &price[i]);
    }

    for(int i=0; i<3 ; i++) {
        printf("Total price 1 : %f\n", price[i] + (0.18 * (price[i])));
    }

    
    // printf("Total price 2 : %f", price[1] + (0.18 * (price[1])));
    // printf("Total price 3 : %f", price[2] + (0.18 * (price[2])));
    return 0;
}