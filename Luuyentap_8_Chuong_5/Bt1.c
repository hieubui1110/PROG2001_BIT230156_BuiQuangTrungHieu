#include <stdio.h>

// Định nghĩa khuôn mẫu Struct
struct Student {
    int mssv;
    char ten[50];
};

int main() {
    // Khởi tạo và gán giá trị trực tiếp
    struct Student s1 = {12345, "Nguyen Van A"};

    // Truy cập thành phần bằng dấu chấm (.)
    printf("MSSV: %d\n", s1.mssv);
    printf("Ten: %s\n", s1.ten);

    return 0;
}