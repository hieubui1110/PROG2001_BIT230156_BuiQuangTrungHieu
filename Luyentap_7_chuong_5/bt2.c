#include <stdio.h>
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i); // In ra theo Index 0-based
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int index = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    printf("Phan tu lon nhat la %d tai chi so (Index) = %d\n", max, index);
    return 0;
}
