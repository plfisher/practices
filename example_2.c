#include <stdio.h>
#include <stdint.h> // This one needed for int32_t and int64_t

int main(void) {
    printf("Let's print type sizes.\n");
    printf("char->\t\t%lu\n", sizeof(char));
    printf("int->\t\t%lu\n", sizeof(int));
    printf("float->\t\t%lu\n", sizeof(float));
    printf("double->\t%lu\n", sizeof(double));
    printf("int32->\t\t%lu\n", sizeof(int32_t));
    printf("int64->\t\t%lu\n", sizeof(int64_t));
    printf("char*->\t\t%lu\n", sizeof(char*));
    printf("int*->\t\t%lu\n", sizeof(int*));
    printf("void*->\t\t%lu\n", sizeof(void*));
    return 0;
}
