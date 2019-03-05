#include <stdio.h>
#include <stdlib.h> // Need for malloc()

#define SIZE 10

int main(void) {
    int i, *arr;
    
    arr = (int*)malloc(SIZE * sizeof(int));
    if (arr == NULL) {
        perror("malloc: ");
        exit(1);
    }

    for (i = 0; i < SIZE; ++i) {
        *(arr + i) = i;
    }

    printf("Done.\n");

    return 0;
}
