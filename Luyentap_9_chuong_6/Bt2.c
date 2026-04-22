#include <stdio.h>

int main() {
    char text[1000];
    FILE *f = fopen("data.txt", "w");

    if (f == NULL) return 1;

    printf("Nhap doan text bat ky: ");
    fgets(text, sizeof(text), stdin); // Dung fgets de nhap duoc ca dau cach

    fprintf(f, "%s", text);
    fclose(f);

    printf("Ghi file thanh cong!\n");
    return 0;
}
