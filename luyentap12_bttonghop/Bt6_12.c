#include <stdio.h>

int main() {
    float d;
    double tien = 0;

    printf("Nhap so km: ");
    scanf("%f", &d);

    if (d <= 0) {
        printf("So km khong hop le!\n");
    } else {
        // Tính toán cước phí theo từng mốc
        if (d <= 1) {
            tien = 15000;
        } else if (d <= 5) {
            tien = 15000 + (d - 1) * 13000;
        } else {
            tien = 15000 + 4 * 13000 + (d - 5) * 11000;
        }

        // Áp dụng giảm giá 10% nếu đi trên 120km
        if (d > 120) {
            tien = tien * 0.9;
        }

        // In ra số tiền, loại bỏ phần thập phân (%.0lf)
        printf("Tong tien taxi la: %.0lf VND\n", tien);
    }

    return 0;
}
