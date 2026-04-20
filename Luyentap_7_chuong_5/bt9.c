#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    printf("Nhap vao mot chuoi string: ");
    fgets(str, sizeof(str), stdin);

    // Nhập ký tự cần tìm
    printf("Nhap ky tu can tim: ");
    scanf("%c", &ch);

    // Duyệt từng phần tử của string đến khi gặp '\0' (kết thúc chuỗi)
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);

    return 0;
}

