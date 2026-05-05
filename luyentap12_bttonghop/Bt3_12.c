#include <stdio.h>

    void giaiPTBacNhat(float a, float b) {
    if (a == 0) {
        if (b == 0) printf("Phuong trinh vo so nghiem\n");
        else printf("Phuong trinh vo nghiem\n");
    } else {
        printf("Nghiem x = %.2f\n", -b / a);
    }
}

int main() {
    float a1 = 2, b1 = -4;
    printf("Giai PT: %.2fx + %.2f = 0\n", a1, b1);
    giaiPTBacNhat(a1, b1);
    return 0;
}