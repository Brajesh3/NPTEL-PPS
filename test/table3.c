#include <stdio.h>
#include <ctype.h>  // For checking character input

int main() {
    int n;
    char input[10];  // To store either the integer or 'n'
    
    // ANSI escape codes for colors
    char *green = "\033[0;32m";
    char *blue = "\033[0;34m";
    char *reset = "\033[0m";  // To reset color after each line

    while (1) {
        printf("Enter an integer (or 'n' to exit): ");
        scanf("%s", input);  // Get the input as a string

        // Check if input is 'n' for exiting
        if (tolower(input[0]) == 'n') {
            break;  // Exit the loop
        }

        // Otherwise, convert input to an integer
        sscanf(input, "%d", &n);

        // Print multiplication table for the number
        for (int i = 1; i <= 10; ++i) {
            printf("%s%d%s * %s%d%s = %s%d%s\n", blue, n, reset, blue, i, reset, green, n * i, reset);
        }
    }

    return 0;
}

