#include <stdio.h>

int main() {
    int value = 999;
    int result;
    FILE *f = fopen("random_pos.bin", "wb+");

    // Di chuyển đến byte thứ 20
    // SEEK_SET là bắt đầu từ đầu file
    fseek(f, 20, SEEK_SET);
    
    // Ghi giá trị
    fwrite(&value, sizeof(int), 1, f);

    // Quay lại byte thứ 20 để đọc
    fseek(f, 20, SEEK_SET);
    fread(&result, sizeof(int), 1, f);

    // Kiểm tra
    if (value == result) {
        printf("Bai 4: Ghi va doc tai vi tri 20 thanh cong! Gia tri: %d\n", result);
    }

    // In vị trí con trỏ hiện tại sau khi đọc xong
    // fseek ghi 4 byte (int) từ vị trí 20, nên con trỏ sẽ ở 24
    printf("Vi tri con tro hien tai: %ld\n", ftell(f));

    fclose(f);
    return 0;
}