#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1 = {"Nguyen Van A", 20};
    struct Student s2;
    FILE *f = fopen("student.bin", "wb+");

    // Ghi struct vào file
    fwrite(&s1, sizeof(struct Student), 1, f);

    // Quay về đầu file để đọc
    rewind(f);

    // Đọc struct từ file
    fread(&s2, sizeof(struct Student), 1, f);

    // Kiểm tra
    if (strcmp(s1.name, s2.name) == 0 && s1.age == s2.age) {
        printf("Bai 1: Doc dung! Name: %s, Age: %d\n", s2.name, s2.age);
    }

    fclose(f);
    return 0;
}