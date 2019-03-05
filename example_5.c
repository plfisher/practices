#include <stdio.h>

int main(void) {
    int x = 10;
    int* addr_of_x = &x;
    printf("=== Using x ===\n");
    printf("Value of X->\t%d\n", x);
    printf("Address of X->\t%p\n", &x);
    printf("=== Using y ===\n");
    printf("Value of X->\t%d\n", *addr_of_x);
    printf("Address of X->\t%p\n", addr_of_x);
    printf("Address of Y->\t%p\n", &addr_of_x);
    return 0;
}
