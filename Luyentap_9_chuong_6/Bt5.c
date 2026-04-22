#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("data.txt", "r");
    FILE *fout = fopen("ketqua_so.txt", "w");
    int count = 0;
    char c;

    if (fin == NULL || fout == NULL) return 1;

    while ((c = fgetc(fin)) != EOF) {
        if (isdigit(c)) {
            count++;
        }
    }

    fprintf(fout, "So luong con so la: %d", count);
    fclose(fin);
    fclose(fout);

    printf("Da dem xong, ket qua tai ketqua_so.txt\n");
    return 0;
}