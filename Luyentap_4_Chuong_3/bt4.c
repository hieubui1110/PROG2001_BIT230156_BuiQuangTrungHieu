#include <stdio.h>

int main() {
    int n, tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    printf("Tong S = %d", tong);
    return 0;
}
