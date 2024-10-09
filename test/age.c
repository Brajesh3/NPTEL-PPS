#include <stdio.h>

int main() {
    int age;
    long long seconds;

    // Prompt the user to enter their age
    printf("Enter your age in years: ");
    scanf("%d", &age);

    // Assuming an average year has 365.25 days to account for leap years
    seconds = (long long) age * 365.25 * 24 * 60 * 60;

    // Print the result
    printf("You have been alive for approximately %lld seconds!\n", seconds);

    return 0;
}
