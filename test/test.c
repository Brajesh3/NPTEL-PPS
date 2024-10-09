#include <stdio.h>

int main() {
    int i, j, rows;

    // Number of rows enter karna hai
    printf("Kitni rows chahiye: ");
    scanf("%d", &rows);

    // Yeh loop har ek row ke liye chalega
    for (i = 1; i <= rows; i++) {
        // Yeh loop spaces print karega, jisse stars triangle ki tarah lagen
        // Spaces ka formula hai: (rows - i), taaki stars center me aayein
        // Example:
        // Row 1: 5-1=4 spaces, Row 2: 5-2=3 spaces, Row 3: 5-3=2 spaces...
        for (j = i; j < rows; j++) {
            printf(" ");  // yeh har bar ek space print karega
        }

        // Yeh loop stars print karega har row ke liye
        // (2*i-1) ka matlab hai ki har row me odd number of stars print karna hai
        // Example:
        // Row 1: 1 star, Row 2: 3 stars, Row 3: 5 stars...
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Har row print karne ke baad new line lena hai
        printf("\n");
    }

    return 0;
}
