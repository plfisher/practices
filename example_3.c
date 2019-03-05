#include <stdio.h>
#include <string.h>

int main(void) {
    char line[100];
    char *family, *given, *gap;
    printf("Enter your name: "); 
    fgets(line, 100, stdin);
    given = line;
    for (gap = line; *gap; gap++)
        if (isspace(*gap)) break;

    *gap = '\0';
    family = gap + 1;
    printf("GName FName: %s %s", given, family);
    printf("Your name: %s, %s\n", family, given);
    return 0;
}

