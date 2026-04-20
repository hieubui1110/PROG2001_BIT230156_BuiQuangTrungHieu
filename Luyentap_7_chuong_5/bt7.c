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
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Ma trận chuyển vị sẽ đảo ngược hàng và cột lại
    int transposed[cols][rows];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    printf("\nMa Tran Chuyen Vi:\n");
    // In ra ma trận chuyển vị (vòng lặp ngoài theo cột ban đầu)
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d\t", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
