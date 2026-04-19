#include <stdio.h>

// Function to modify array elements
void modifyArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Double each element
    }
}

int main() {
    int numbers[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Call the function
    modifyArray(numbers, size);

    // Print modified array
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
