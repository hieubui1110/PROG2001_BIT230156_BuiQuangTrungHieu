#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "r");
    char c;

    if (f == NULL) {
        printf("Khong tim thay file!\n");
        return 1;
    }

    printf("Noi dung file: ");
    while ((c = fgetc(f)) != EOF) {
        putchar(c);
    }

    fclose(f);
    return 0;
}
