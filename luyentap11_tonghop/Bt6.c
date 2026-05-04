#include <stdio.h>

int tinhTongDeQuy(int n) {
    if (n == 1) return 1;
    return n * n + tinhTongDeQuy(n - 1);
}

int main() {
    int n;
    printf("Nhập n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui lòng nhập n > 0\n");
    } else {
        printf("Tổng S (dùng đệ quy) = %d\n", tinhTongDeQuy(n));
    }
    return 0;
}
