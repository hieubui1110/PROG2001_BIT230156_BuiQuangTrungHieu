#include <stdio.h>

int main() {
    int n;
    do {
        printf("Nhap vao 1 so (1-100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    printf("Ban da nhap dung so: %d", n);
    return 0;
}
