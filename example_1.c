#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void) {
    int a = 10;
    int* x = (int*)malloc(SIZE * sizeof(int));
    int i;
    for (i = 0; i < SIZE; ++i) {
        x[i] = i;
    }
    for (i = 0; i < SIZE; ++i) {
        printf("X %d: %d\n", i, *(x + i));
    }
    printf("Address of x: %p\n", x);
    free(x);
    //int *y = (int*)malloc(SIZE * sizeof(int));
    //printf("Address of y: %p\n", y);
    // Here comes second free()! BAD!
    free(x);
    
    return 0;
}
