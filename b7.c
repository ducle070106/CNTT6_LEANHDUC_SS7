#include <stdio.h>

int is_prime(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int start, end;
    printf("Nhap so nguyen bat dau: ");
    scanf("%d", &start);
    printf("Nhap so nguyen ket thuc: ");
    scanf("%d", &end);
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}