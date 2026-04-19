#include <stdio.h>
// Hàm tìm giá trị lớn nhất trong 3 số
int timMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
int main() {
    int a, b, c;

    // Nhập ba số từ bàn phím
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Gọi hàm và in ra kết quả max
    printf("Gia tri lon nhat cua 3 so la: %d\n", timMax(a, b, c));

    return 0;
}
