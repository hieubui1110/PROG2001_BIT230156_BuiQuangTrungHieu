#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 3, num2 = 7;

    // Call the function
    int result = add(num1, num2);

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
