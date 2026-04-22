#include <stdio.h>

// Struct con (Phải định nghĩa trước)
struct Owner {
    char ten[50];
    int tuoi;
};

// Struct cha chứa struct con
struct Car {
    char model[50];
    int nam;
    struct Owner chuXe; // Struct Owner lồng bên trong
};

int main() {
    // Khởi tạo biến Car với thông tin Owner bên trong
    struct Car c1 = {"VinFast VF8", 2024, {"Pham Nhat V", 50}};

    // Truy cập sâu vào bên trong bằng 2 lần dấu chấm
    printf("Model xe: %s (%d)\n", c1.model, c1.nam);
    printf("Chu xe: %s - Tuoi: %d\n", c1.chuXe.ten, c1.chuXe.tuoi);

    return 0;
}
