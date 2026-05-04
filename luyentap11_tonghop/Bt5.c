#include <stdio.h>

int main() {
    int n, tong = 0;
    printf("Nhập n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tong += i * i;
    }

    printf("Tổng S = %d\n", tong);
    return 0;
}
