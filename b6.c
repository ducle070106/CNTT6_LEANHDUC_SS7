#include <stdio.h>

int main() {
    int number, reversed_number = 0, remainder;
    printf("Nhap so nguyen: ");
    scanf("%d", &number);
    while (number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }
    printf("So dao nguoc la: %d\n", reversed_number);
    return 0;
}