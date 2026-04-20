#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Cộng dồn giá trị vào biến sum
    }

    printf("Tong cac phan tu trong mang la: %d\n", sum);
    return 0;
}
