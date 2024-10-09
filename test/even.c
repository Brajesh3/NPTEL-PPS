#include <stdio.h>

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is even
    if (num % 2 == 0)
        printf("%d is an even number.\n", num);

    return 0;
}
