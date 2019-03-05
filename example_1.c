#include <stdio.h>

int main(void) {
    int x = 10;
    printf("Address of X->\t\t\t%p\n", &x);
    int* addr_of_x = &x;
    printf("Address of X (using pointer)->\t%p\n", addr_of_x);
    return 0;
}
