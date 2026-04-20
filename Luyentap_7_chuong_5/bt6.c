#include <stdio.h>

int main() {
    int rows, cols;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);

    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

    printf("\n--- Nhap Ma Tran 1 ---\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("mat1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n--- Nhap Ma Tran 2 ---\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\n--- Tong 2 Ma Tran ---\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

