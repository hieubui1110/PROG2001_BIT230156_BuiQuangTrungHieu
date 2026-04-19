#include <stdio.h>
#define PI 3.14159

// Function to calculate the area of a circle
float calculateArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius = 5.5;

    // Call the function
    float area = calculateArea(radius);

    // Print the result
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
