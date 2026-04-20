#include <stdio.h>
#include <stdbool.h>

int main() {
    int i;
    float f;
    char c;
    int temp_b; // Dung de nhap 0 hoac 1 cho bool
    bool b;

    printf("Nhap lan luot: [so nguyen] [so thuc] [ky tu] [0/1]:\n");

    // Luu y: Khoang trang truoc %c cuc ky quan trong de tranh loi "troi lenh"
    scanf("%d %f %c %d", &i, &f, &c, &temp_b);

    b = temp_b; // Gan gia tri vua nhap cho bien bool

    printf("\nKet qua: %d, %.2f, %c, %d\n", i, f, c, b);

    return 0;
}
