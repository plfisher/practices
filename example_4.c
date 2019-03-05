#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 20;
    int* addr_of_x = &x;
    int* addr_of_y = &y;
    printf("Value of X->\t%d\n", x);
    printf("Value of Y->\t%d\n", y);
    /* 
     * Be aware of pointers. They point
     * to the memory location so you change value in
     * that memory cell!
     */
    addr_of_y = addr_of_x;
    *addr_of_y = 15;
    printf("Value of X->\t%d\n", x);
    printf("Value of Y->\t%d\n", y);
    return 0;
}
