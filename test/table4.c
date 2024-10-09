#include <stdio.h>
#include <ctype.h>  // For checking character input
#include <string.h> // For string length

int is_valid_number(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            return 0;  // Return 0 if a non-digit character is found
        }
    }
    return 1;  // Return 1 if all characters are digits
}

int main() {
    int n;
    char input[20];  // Increased size to allow for larger inputs
    
    // ANSI escape codes for colors
    char *green = "\033[0;32m";
    char *blue = "\033[0;34m";
    char *red = "\033[0;31m";
    char *yellow = "\033[0;33m";
    char *reset = "\033[0m";  // To reset color after each line

    while (1) {
        printf("Enter an integer (or 'n' to exit): ");
        scanf("%s", input);  // Get the input as a string

        // Check if input is 'n' or 'N' for exiting
        if (tolower(input[0]) == 'n' && strlen(input) == 1) {
            printf("%sGoodbye!%s\n", yellow, reset);
            break;  // Exit the loop
        }

        // Validate if input is a number
        if (!is_valid_number(input)) {
            printf("%sInvalid input. Please enter a valid integer!%s\n", red, reset);
            continue;  // Skip the rest of the loop and prompt for input again
        }

        // Convert input to an integer
        sscanf(input, "%d", &n);

        // Print multiplication table for the number
        printf("%sMultiplication Table for %d:%s\n", yellow, n, reset);
        for (int i = 1; i <= 10; ++i) {
            printf("%s%d%s * %s%d%s = %s%d%s\n", blue, n, reset, blue, i, reset, green, n * i, reset);
        }
    }

    return 0;
}
