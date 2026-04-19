#include <stdio.h>

// Function to find the maximum of three numbers
int findMax(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int num1 = 12, num2 = 25, num3 = 18;

    // Call the function to find the maximum
    int max = findMax(num1, num2, num3);

    // Print the result
    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, max);

    return 0;
}
