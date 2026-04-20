#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap vao mot chuoi (string): ");
    // Sử dụng fgets để có thể đọc được chuỗi có dấu cách (space)
    fgets(str, sizeof(str), stdin);

    // fgets hay nuốt cả kí tự xuống dòng '\n', ta cần bỏ nó đi
    if(str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Cbang vua nhap: %s\n", str);

    // Thuật toán kiểm tra độ dài thủ công
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }

    printf("Chieu dai cua chuoi (khong dung bo dem \0) la: %d\n", length);
    // Bạn cũng có thể dùng hàm có sẵn: printf("Chieu dai: %lu\n", strlen(str));

    return 0;
}

