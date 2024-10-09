#include <stdio.h>

int main() {
    int n;
    char choice;

    // ANSI escape codes for colors
    char *green = "\033[0;32m";
    char *blue = "\033[0;34m";
    char *reset = "\033[0m"; // To reset color after each line

    do {
        printf("Enter an integer: ");
        scanf("%d", &n);

        // Print multiplication table
        for (int i = 1; i <= 10; ++i) {
            printf("%s%d%s * %s%d%s = %s%d%s\n", blue, n, reset, blue, i, reset, green, n * i, reset);
        }

        // Ask if the user wants to continue with the next number
        printf("Do you want the next number's table? (y/n): ");
        scanf(" %c", &choice);

        // Move to the next number if 'y'
        if (choice == 'y') {
            n++;
        }

    } while (choice == 'y');

    return 0;
}

