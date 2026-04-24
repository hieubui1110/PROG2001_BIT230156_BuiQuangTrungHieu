#include <stdio.h>

struct Product {
    char name[30];
    double price;
};

int main() {
    struct Product list[] = {{"Laptop", 1500.5}, {"Mouse", 25.0}, {"Keyboard", 45.0}};
    int n = 3;
    struct Product res[3];

    FILE *f = fopen("products.bin", "wb+");

    fwrite(list, sizeof(struct Product), n, f);

    rewind(f);
    fread(res, sizeof(struct Product), n, f);

    printf("Bai 3: Kiem tra danh sach san pham:\n");
    for(int i = 0; i < n; i++) {
        printf("- %s: %.1f\n", res[i].name, res[i].price);
    }

    fclose(f);
    return 0;
}
