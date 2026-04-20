#include <stdio.h>

int factorial(int n) {
    if (n == 0)   // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive call
}

int main() {
    printf("5! = %d", factorial(5));
    return 0;
}
//Tính giai thừa
//-Điều kiện dừng (base case)
// Tránh gọi vô hạn
// Khi thỏa điều kiện → trả về kết quả
//  -Lời gọi đệ quy (recursive call)
// Hàm gọi lại chính nó với bài toán nhỏ hơn