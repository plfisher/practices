#include <stdio.h>

int main(void) {
    int x = 10;
    int* addr_of_x = &x;
    /*
     * There is another way how to declare pointers
     * and they are equal, it is mostly a matter
     * of taste/code style:
     * int *addr_of_x;
     */
    printf("Value of X->\t%d\n", x);
    (*addr_of_x) = 12;
    printf("Value of X->\t%d\n", x);
    return 0;
}
