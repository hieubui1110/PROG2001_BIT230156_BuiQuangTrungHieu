#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("data.txt", "r");
    FILE *fout = fopen("ketqua_chu.txt", "w");
    int count = 0;
    char c;

    if (fin == NULL || fout == NULL) return 1;

    while ((c = fgetc(fin)) != EOF) {
        if (isalpha(c)) {
            count++;
        }
    }

    fprintf(fout, "So luong chu cai la: %d", count);
    fclose(fin);
    fclose(fout);

    printf("Da dem xong, ket qua tai ketqua_chu.txt\n");
    return 0;
}
