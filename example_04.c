#include <stdio.h>

typedef struct {
    int a[2];
    double d;
} struct_t;

double fun(int i) {
    struct_t s;
    s.d = 3.14;
    s.a[i] = 1073741824;
    return s.d;
}

int main(void) {
    printf("-> %lg\n", fun(0));
    printf("-> %lg\n", fun(1));
    printf("-> %lg\n", fun(2));
    printf("-> %lg\n", fun(3));
    printf("-> %lg\n", fun(4));

    return 0;
}
