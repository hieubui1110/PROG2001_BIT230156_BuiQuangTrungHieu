#include <stdio.h>

struct Employee {
    int id;
    char ten[50];
    float luong;
};

int main() {
    // Khởi tạo mảng gồm 2 nhân viên
    struct Employee ds[2] = {
        {101, "Tran Thi B", 1500.5},
        {102, "Le Van C", 2000.0}
    };

    // Duyệt mảng để in thông tin
    for (int i = 0; i < 2; i++) {
        printf("ID: %d | Ten: %s | Luong: %.1f\n", ds[i].id, ds[i].ten, ds[i].luong);
    }

    return 0;
}
