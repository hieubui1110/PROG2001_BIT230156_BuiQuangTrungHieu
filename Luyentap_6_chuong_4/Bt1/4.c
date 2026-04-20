#include <stdio.h>

static void hello() {
    printf("Hello from static function\n");
}

int main() {
    hello(); // OK
    return 0;
}
// Khi nào dùng hàm static?
// ✔ 1. Ẩn hàm nội bộ (encapsulation)
// Hàm chỉ dùng bên trong file
// Tránh bị gọi nhầm từ nơi khác
// ✔ 2. Tránh xung đột tên
// Nhiều file có thể có hàm trùng tên
