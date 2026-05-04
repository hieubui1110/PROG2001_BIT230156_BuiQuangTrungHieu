#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool laSNT = true;
    printf("Nhập số nguyên dương N: ");
    scanf("%d", &n);

    if (n < 2) {
        laSNT = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                laSNT = false;
                break;
            }
        }
    }

    if (laSNT) printf("%d là số nguyên tố\n", n);
    else printf("%d không phải là số nguyên tố\n", n);
    return 0;
}