#include <stdio.h>
// Hàm tính tổng từ 1 đến n
int tinhTong(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;

    // Nhập n từ bàn phím
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // Gọi hàm và in ra kết quả
    printf("Tong 1 + 2 + ... + %d = %d\n", n, tinhTong(n));

    return 0;
}

