#include <stdio.h>
#include <stdbool.h> // Cần thiết để dùng kiểu bool

int main() {
    int age = 20;
    float gpa = 3.5;
    char grade = 'A';
    bool isStudent = true;

    // In trên cùng một dòng, cách nhau bởi dấu phẩy
    // %d (int), %.1f (float), %c (char), %d (bool - in ra 0 hoặc 1)
    printf("%d, %.1f, %c, %d\n", age, gpa, grade, isStudent);

    return 0;
}//
// Created by ASUS on 4/14/2026.
//
