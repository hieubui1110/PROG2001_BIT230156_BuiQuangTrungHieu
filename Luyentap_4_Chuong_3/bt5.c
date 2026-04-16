#include <stdio.h>

int main() {
    int n, soDao = 0;
    printf("Nhap so: ");
    scanf("%d", &n);

    while (n != 0) {
        soDao = soDao * 10 + (n % 10);
        n /= 10;
    }
    printf("So dao nguoc la: %d", soDao);
    return 0;
}
