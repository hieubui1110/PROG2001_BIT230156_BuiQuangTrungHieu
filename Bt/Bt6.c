#include <stdio.h>
#include <stdbool.h>

int main() {
    int i;
    float f;
    char c;
    int b; // Dùng int để nhập cho giá trị bool (0 hoặc 1)

    printf("Nhập lần lượt số nguyên, số thực, ký tự và bool (0/1): \n");

    // Nhập dữ liệu. Lưu ý khoảng trắng trước %c để tránh lỗi trôi lệnh
    scanf("%d %f %c %d", &i, &f, &c, &b);

    printf("Kết quả: %d, %.2f, %c, %d\n", i, f, c, b);

    return 0;
}//
// Created by ASUS on 4/14/2026.
//
