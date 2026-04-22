#include <stdio.h>

int main() {
    // 1. Tạo file trong cùng thư mục code
    FILE *f1 = fopen("test_local.txt", "w");
    if (f1 != NULL) {
        printf("Da tao file test_local.txt thanh cong.\n");
        fclose(f1);
    }

    // 2. Tạo file trong o C (Lưu ý: Cần quyền Admin hoặc dùng đường dẫn hợp lệ)
    // Dùng dấu xuôi '/' hoặc hai dấu ngược '\\' trong đường dẫn
    FILE *f2 = fopen("C:/Temp/test_C.txt", "w");
    if (f2 != NULL) {
        printf("Da tao file trong o C thanh cong.\n");
        fclose(f2);
    } else {
        printf("Khong the tao file o o C (Co the do thieu quyen truy cap).\n");
    }

    return 0;
}
