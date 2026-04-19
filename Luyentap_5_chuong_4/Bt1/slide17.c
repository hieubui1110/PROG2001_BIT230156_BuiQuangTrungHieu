#include <stdio.h>

// Function to swap two numbers
void swap(int* x, int* y) {
    int temp = *x; // Store the value of *x
    *x = *y;       // Assign *y to *x
    *y = temp;     // Assign temp to *y
}

int main() {
    int a = 5, b = 10;
    
    // Print values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function
    swap(&a, &b);

    // Print values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}