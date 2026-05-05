#include <stdio.h>

int main() {
    printf("Cac so thoa man dieu kien: ");
    for (int i = 10; i <= 99; i++) {
        int chuc = i / 10;
        int donVi = i % 10;

        if ((chuc * donVi) == 2 * (chuc + donVi)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
