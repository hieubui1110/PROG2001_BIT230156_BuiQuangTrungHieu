#include <stdio.h>

int timMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int mang[] = {10, 5, 22, -3, 8, 12};
    int n = 6;

    int min = timMin(mang, n);
    printf("Gia tri nho nhat trong mang la: %d\n", min);

    return 0;
}
