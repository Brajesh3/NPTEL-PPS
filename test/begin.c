#include <stdio.h>

// Function declaration: returns int, takes two int parameters
int add(int a, int b) {
    return a + b;  // Add the two numbers and return the result
}

int main() {
    int num1 = 5, num2 = 10;
    
    // Call the add function and store the result
    int result = add(num1, num2);
    
    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    
    return 5;  // Return 0 to indicate successful execution
}
