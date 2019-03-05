#include <stdio.h>

int main(void) {
    int a = 10;
    char c = 'X';
    char array[4];
    char array2[] = {'X', 'Y', 'Z'};

    printf("Please enter string: \n");
    scanf("%s", array);

    printf("Address of array2[0] is\t%p\n", &array2[0]);
    printf("Address of array2[1] is\t%p\n", &array2[1]);
    printf("Address of array2[2] is\t%p\n", &array2[2]);
    printf("Address of array[0] is\t%p\n", array);
    printf("Address of array[1] is\t%p\n", array + 1);
    printf("Address of array[2] is\t%p\n", array + 2);
    printf("Address of array[3] is\t%p\n", array + 3);
    printf("Address of c is\t\t%p\n", &c);

    printf("array2[]: %s\n", array2);

    if (c == 'Y') {
        printf("Welcome to overflow!\n");
    } else {
        printf("This is normal output.\n");
    }

    return 0;
}
