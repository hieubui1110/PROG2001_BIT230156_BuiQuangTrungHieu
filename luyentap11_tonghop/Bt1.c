#include <stdio.h>

int main() {
    float diem;
    printf("Nhập điểm học sinh: ");
    scanf("%f", &diem);

    if (diem >= 9 && diem <= 10) {
        printf("Xếp loại: Xuất sắc\n");
    } else if (diem >= 8) {
        printf("Xếp loại: Giỏi\n");
    } else if (diem >= 6.5) {
        printf("Xếp loại: Khá\n");
    } else if (diem >= 5) {
        printf("Xếp loại: Trung bình\n");
    } else if (diem >= 0) {
        printf("Xếp loại: Yếu\n");
    } else {
        printf("Điểm không hợp lệ!\n");
    }
    return 0;
}
