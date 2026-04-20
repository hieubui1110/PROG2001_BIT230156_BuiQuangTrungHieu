#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Loại bỏ ký tự xuống dòng
    if(str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int length = strlen(str);

    // Thuật toán đảo chiều như với mảng bên trên
    for(int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Chuoi sau khi dao chieu: %s\n", str);

    return 0;
}

