#include <stdio.h>

void sapXepGiamDan(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Thao tac hoan vi (swap)
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int mang[] = {5, 1, 4, 9, 10};
    int n = 5;

    sapXepGiamDan(mang, n);

    printf("Mang sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
