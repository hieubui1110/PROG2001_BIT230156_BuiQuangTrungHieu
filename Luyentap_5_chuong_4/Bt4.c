#include <stdio.h>
// Hàm nhận 3 tham số là con trỏ và trả về con trỏ (theo địa chỉ)
float* tinhTrungBinh(float *a, float *b, float *c) {
    static float trungBinh;
    trungBinh = (*a + *b + *c) / 3.0;
    return &trungBinh;
}
int main() {
    float a, b, c;

    // Nhập ba số từ bàn phím
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Truyền địa chỉ của a, b, c
    float *ketQua = tinhTrungBinh(&a, &b, &c);

    // In ra giá trị
    printf("Gia tri trung binh cua 3 so la: %.2f\n", *ketQua);

    return 0;
}
