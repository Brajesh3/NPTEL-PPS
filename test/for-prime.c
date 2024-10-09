#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) isPrime = 0;
    for (i = 2; i <= num / 2 && isPrime; i++) {
        if (num % i == 0) isPrime = 0;
    }

    printf("%d is %sprime.\n", num, isPrime ? "" : "not ");
    return 0;
}
