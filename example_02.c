#include <stdio.h>

int main(void) {
    float a = (1e20 + (-1e20)) + 3.14;
    float b = 1e20 + (-1e20 + 3.14);
    printf("a-> %f\n", a);
    printf("b-> %f\n", b);
    return 0;
}
