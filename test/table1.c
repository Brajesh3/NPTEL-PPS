#include <stdio.h>

int main() {
    int n;
    // ANSI escape codes for colors
    char *green = "\033[0;32m";
    char *blue = "\033[0;34m";
    char *reset = "\033[0m"; // To reset color after each line

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; ++i) {
        // Printing the multiplication table in blue for n and i, green for result
        printf("%s%d%s * %s%d%s = %s%d%s\n", blue, n, reset, blue, i, reset, green, n * i, reset);
    }

    return 0;
}

