#include <stdio.h>

int main() {
    int a, b, c, min;

    printf("Nhap 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    printf("Gia tri nho nhat la: %d\n", min);

    return 0;
}
