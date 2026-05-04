#include <stdio.h>

int main() {
    int n, tong = 0;
    printf("Nhập N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tong += (2 * i - 1); // Công thức số lẻ thứ i
    }

    printf("Tổng của %d số lẻ đầu tiên là: %d\n", n, tong);
    return 0;
}
