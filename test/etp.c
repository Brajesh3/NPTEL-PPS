#include <stdio.h>

int main()
{
    int n;
    printf("Enter Size: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
