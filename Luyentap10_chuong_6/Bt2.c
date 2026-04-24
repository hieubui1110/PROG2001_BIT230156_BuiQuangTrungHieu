#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int readArr[5];

    FILE *f = fopen("array.bin", "wb+");

    // Ghi mảng
    fwrite(arr, sizeof(int), n, f);

    // Đọc mảng
    rewind(f);
    fread(readArr, sizeof(int), n, f);

    // Kiểm tra
    printf("Bai 2: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] == readArr[i]) printf("%d ", readArr[i]);
    }
    printf(" -> Thanh cong!\n");

    fclose(f);
    return 0;
}
