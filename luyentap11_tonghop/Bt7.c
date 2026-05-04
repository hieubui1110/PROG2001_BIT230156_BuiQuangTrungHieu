#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p1, p2;

    // Nhập SP 1
    printf("Nhập tên SP 1: ");
    fgets(p1.name, sizeof(p1.name), stdin);
    p1.name[strcspn(p1.name, "\n")] = 0; // Xóa dấu xuống dòng
    printf("Nhập giá SP 1: ");
    scanf("%f", &p1.price);
    getchar(); // Xóa bộ nhớ đệm để nhập chuỗi tiếp theo

    // Nhập SP 2
    printf("Nhập tên SP 2: ");
    fgets(p2.name, sizeof(p2.name), stdin);
    p2.name[strcspn(p2.name, "\n")] = 0;
    printf("Nhập giá SP 2: ");
    scanf("%f", &p2.price);

    // So sánh
    if (p1.price > p2.price) {
        printf("\nSản phẩm '%s' đắt hơn '%s'\n", p1.name, p2.name);
    } else if (p1.price < p2.price) {
        printf("\nSản phẩm '%s' rẻ hơn '%s'\n", p1.name, p2.name);
    } else {
        printf("\nHai sản phẩm bằng giá nhau.\n");
    }

    return 0;
}
