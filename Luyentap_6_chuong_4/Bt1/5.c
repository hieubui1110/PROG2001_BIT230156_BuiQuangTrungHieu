#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}

int main() {
    counter(); // 1
    counter(); // 2
    counter(); // 3
}

// Phân biệt: static trong hàm vs biến
// 🔹 static với hàm
// Giới hạn phạm vi (scope)
// 🔹 static với biến trong hàm
// Giữ giá trị giữa các lần gọi