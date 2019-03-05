#include <stdio.h>

int main(int argc, char* argv[]) {
    int count;
    printf("This program name is: \"%s\".\n", argv[0]);
    if (argc == 1) {
        printf("Program was called without arguments.\n");
    } else {
        for (count = 1; count < argc; ++count) {
            printf("argv[%d] = %s\n", count, argv[count]);
        }
    }
    return 0;
}
