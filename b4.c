#include <stdio.h>

int main() {
    int rows, columns;
    printf("Nhap chieu dai (so dong): ");
    scanf("%d", &rows);
    printf("Nhap chieu rong (so cot): ");
    scanf("%d", &columns);
    if (rows <= 0 || columns <= 0) {
        printf("Vui long nhap so nguyen duong cho chieu dai va chieu rong.\n");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}