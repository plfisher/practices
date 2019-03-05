#include <stdio.h>

struct {
    char x;
    int y;
    char z;
} s1;

struct {
    char x;
    char z;
    int y;
} s2;

int main(void) {
    printf("=== Reminder ===\n");
    printf("Size of int-> %lu\n", sizeof(int));
    printf("Size of char-> %lu\n", sizeof(char));
    printf("=== Reminder ===\n");
    printf("Size of s1-> %lu\n", sizeof(s1));
    printf("Size of s2-> %lu\n", sizeof(s2));

    return 0;
}
