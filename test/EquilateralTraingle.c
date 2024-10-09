#include <stdio.h>

int main() {
    int i, j, rows;

    // Number of rows enter karna hai
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);

    // Yeh loop har ek row ke liye chalega
    for (i = 1; i <= rows; i++) {
        // Yeh loop spaces print karega, jisse stars triangle ki tarah lagen
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        // Yeh loop stars print karega har row ke liye
        // (2*i-1) ka matlab hai ki har row me 1, 3, 5, 7... stars print karne hain
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Har row print karne ke baad new line lena hai
        printf("\n");
    }

    return 0;
}
