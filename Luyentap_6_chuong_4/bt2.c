#include <stdio.h>

// Hàm đệ quy tính tổng 1 + 2 + ... + n
int tinhTong(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return n + tinhTong(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    if (scanf("%d", &n) != 1) {
        printf("Gia tri nhap vao khong hop le.\n");
        return 1;
    }

    if (n < 0) {
        printf("Vui long nhap n >= 0.\n");
    } else {
        int ketQua = tinhTong(n);
        printf("Tong 1 + 2 + ... + %d = %d\n", n, ketQua);
    }

    return 0;
}
