#include <stdio.h>

// Hàm tìm kiếm và trả về chỉ số (index), trả về -1 nếu không có
int timKiemTruoc(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, value;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    int index = timKiemTruoc(arr, n, value);
    if (index != -1) {
        printf("Tim thay gia tri %d tai chi so (Index) = %d\n", value, index);
    } else {
        printf("Khong tim thay gia tri %d trong mang.\n", value);
    }

    return 0;
}

