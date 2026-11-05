#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        puts("Error");
        return 0;
    }
    if (n == 0) {
        puts("No");
        return 0;
    }

    int found = 0;
    if (n % 3 == 0) {
        printf("Up");
        found = 1;
    }
    if (n % 5 == 0) {
        printf("Go");
        found = 1;
    }
    if (n % 7 == 0) {
        printf("!!");
        found = 1;
    }
    if (!found) {
        printf("No");
    }
    putchar('\n');
    return 0;
}