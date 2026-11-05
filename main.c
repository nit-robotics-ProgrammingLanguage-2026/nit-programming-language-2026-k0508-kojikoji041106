#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Error\n");
    } else if (n == 0) {
        printf("No\n");
    } else {
        int matched = 0;

        if (n % 3 == 0) {
            printf("Up");
            matched = 1;
        }
        if (n % 5 == 0) {
            printf("Go");
            matched = 1;
        }
        if (n % 7 == 0) {
            printf("!!");
            matched = 1;
        }
        if (!matched) {
            printf("No");
        }
        printf("\n");
    }

    return 0;
}
