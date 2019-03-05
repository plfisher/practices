#include <stdio.h>

/*
 * Created a local copy
 */
void swap_wrong(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

/*
 * Manipulating values at
 * particular addresses
 */
void swap_correct(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int x = 10;
    int y = 20;
    printf("=== Initial ===\n");
    printf("Value of X->\t%d\n", x);
    printf("Value of Y->\t%d\n", y);
    swap_wrong(x, y);
    printf("=== Wrong swap ===\n");
    printf("Value of X->\t%d\n", x);
    printf("Value of Y->\t%d\n", y);
    swap_correct(&x, &y);
    printf("=== Correct swap ===\n");
    printf("Value of X->\t%d\n", x);
    printf("Value of Y->\t%d\n", y);
    return 0;
}
