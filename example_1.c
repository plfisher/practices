#include <stdio.h>

int main(void) {
    char* a = "abc";
    int i;
    printf("-> %s\n", a);
    for (i = 0; i < 3; ++i) {
        printf("%c ", a[i]);
    }
    printf("\n");
    
    a[1] = 'x';
    for (i = 0; i < 3; ++i) {
        printf("%c ", a[i]);
    }
    printf("\n");
    
    return 0;
}
