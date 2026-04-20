#include <stdio.h>

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMa tran duoc in theo format:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            // In mỗi phần tử cách nhau bởi dấu tab
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // Hết một hàng thì xuống dòng
    }

    return 0;
}

