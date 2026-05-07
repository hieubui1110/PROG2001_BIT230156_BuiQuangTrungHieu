#include <stdio.h>
#include <ctype.h> // Thu vien chua cac ham xu ly ky tu

int main() {
    char c;

    printf("Nhap mot ky tu: ");
    scanf("%c", &c);

    if (isdigit(c)) {
        printf("Ky tu so la: %c\n", c);
    }
    else if (isalpha(c)) {
        // Hàm toupper() sẽ chuyển chữ thường thành chữ hoa (nếu đã là chữ hoa thì giữ nguyên)
        printf("Ky tu chu la: %c\n", toupper(c));
    }
    else {
        printf("Ky tu nay khong phai la so hay chu cai.\n");
    }

    return 0;
}
