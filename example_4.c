#include <stdio.h>

int main(void) {
char *msg = "Hello there";
char *nums = "1 3 5 7 9";
char s[10], t[10];
int a, b, c, n;

n = sscanf(msg, "%s %s", s, t);
n = printf("%10s %-10s", t, s);
n = sscanf(nums, "%d %d %d", &a, &b, &c);

printf("%d flower%s\n", n, n > 1 ? "s" : " ");
printf("a = %d, answer = %d\n", a, b+c);

return 0;
}
