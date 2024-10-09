#include <stdio.h>

int main() {
    int n, i, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        f = 1;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                f = 1;
                break;
            }
        }
    }

    if (f == 0)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}
