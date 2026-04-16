#include <stdio.h>

int main() {
    int i = 1;
    do {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("So dau tien la: %d", i);
            break;
        }
        i++;
    } while (1); // 1 tuong duong voi true trong C
    return 0;
}
