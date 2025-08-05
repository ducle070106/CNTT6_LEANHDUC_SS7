#include <stdio.h>

int main() {
    int limit;
    printf("Nhap so nguyen gioi han: ");
    scanf("%d", &limit);

    int even_digit_count = 0;
    int odd_digit_count = 0;
    for (int i = 1; i <= limit; i++) {
        int temp_number = i;
        while (temp_number > 0) {
            int digit = temp_number % 10;

            if (digit % 2 == 0) {
                even_digit_count++;
            } else {
                odd_digit_count++;
            }
            temp_number /= 10;
        }
    }
    printf("Tu 1 den %d, co %d chu so chan va %d chu so le.\n", limit, even_digit_count, odd_digit_count);

    return 0;
}