#include <stdio.h>

#define SIZE 10

int main(void) {
    int nums[SIZE];
    int i;
    int* ptr;
    /*
     * Highly recommend to use curly braces
     * even if you can omit them!
     */
    for (i = 0; i < SIZE; ++i) {
        nums[i] = i;
    }
    printf("=== Our nums array ===\n");
    for (i = 0; i < SIZE; ++i) {
        printf("%d: %d\n", i, nums[i]);
    }

    ptr = nums + 2;
    printf("nums[3]->\t%d\n", nums[3]);
    printf("(ptr + 4)[2]->\t%d\n", (ptr + 4)[2]);

    return 0;
}
