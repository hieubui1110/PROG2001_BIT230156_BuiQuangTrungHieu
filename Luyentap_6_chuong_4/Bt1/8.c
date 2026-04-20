#include <stdio.h>

void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    printf("a = %d", a); // vẫn là 10
    return 0;
} //Truyền tham số theo giá trị (Call by Value)