#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b; // Return the sum
}

int main() {
    int num1 = 5, num2 = 10;

    // Call the function with arguments
    int sum = add(num1, num2);

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
