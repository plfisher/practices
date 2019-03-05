#include <stdio.h>

void capitalize(char* s) {
    s[0] = toupper(s[0]);
}

int main(void) {
    char str[255];
    int i = 0;
    str[0] = 'a';
    str[1] = ' ';
    str[2] = 'c';
    str[3] = 'a';
    str[4] = 't';
    str[5] = '\0'; // Sometimes can be important. Esp. in networking!
    /*
     * '' usually contains character, while
     * "" contains string
     */
    printf("Before-> %s\n", str);
    capitalize(str);
    printf("Before-> %s\n", str);
    return 0;
}
