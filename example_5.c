#include <stdio.h>
#include <errno.h>

void make_big(char* s) {
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
    make_big(str);
    printf("Before-> %s\n", str);
    fprintf(stdout, "Let's use fprintf: %s\n", str);

    FILE* my_file = NULL; // Good practice to initialize pointer to NULL
    my_file = fopen("./test.txt", "w"); // Good one
    if (my_file == NULL) {
        /*
         * Will return textual representation of error
         */
        perror("Error during opening file. Error: ");
        /*
         * Instead of searching for an error
         * can just return errno. Sometimes may
         * want to return specific one
         */
        return -errno;
    }
    fprintf(my_file, "Printing to file: %s\n", str);
    if (fclose(my_file) < 0) {
        perror("Error during closing file. Error: ");
        return -errno;
    }

    return 0;
}
