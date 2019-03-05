#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void) {
    int a = 10;
    int* x = (int*)malloc(SIZE * sizeof(int));
    int* y = (int*)malloc(SIZE * sizeof(int));
    int i;
    for (i = 0; i < SIZE; ++i) {
        x[i] = i;
        y[i] = i;
    }
    for (i = 0; i < SIZE; ++i) {
        printf("X %d: %d\n", i, *(x + i));
    }
    printf("=== DELIM ===\n");
    for (i = 0; i < SIZE; ++i) {
        printf("Y %d: %d\n", i, *(y + i));
    }
    free(x);
    printf("=== AFTER FREE ===\n");
    for (i = 0; i < SIZE; ++i) {
        y[i] += x[i];
    }
    for (i = 0; i < SIZE; ++i) {
        printf("Y %d: %d\n", i, *(x + i));
    }
    
    return 0;
}
