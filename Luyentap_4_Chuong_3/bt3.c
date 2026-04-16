#include <stdio.h>

    int main() {
    int thu;
    printf("Nhap vao 1 so (1-7): ");
    scanf("%d", &thu);

    switch(thu) {
        case 1: printf("Chu nhat"); break;
        case 2: printf("Thu hai"); break;
        case 3: printf("Thu ba"); break;
        case 4: printf("Thu tu"); break;
        case 5: printf("Thu nam"); break;
        case 6: printf("Thu sau"); break;
        case 7: printf("Thu bay"); break;
        default: printf("Khong hop le!");
    }
    return 0;
}
