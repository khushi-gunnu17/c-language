
#include <stdio.h>
#include <stdlib.h>

int main() {

    // runtime allocation of memory
    float *ptr;
    ptr = (float*) calloc(5, sizeof(float));

    // guarantees initialization of the memory with 0
    for (int i=0; i<5 ; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}