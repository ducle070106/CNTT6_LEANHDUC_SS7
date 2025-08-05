#include <stdio.h>

int main() {
    int number, digit_to_find, count = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &number);
    printf("Nhap chu so x (0-9): ");
    scanf("%d", &digit_to_find);
    if (number == 0 && digit_to_find == 0) {
        count = 1;
    }
    else {
        int temp_number = number;
        if (temp_number < 0) {
            temp_number = -temp_number;
        }
        while (temp_number > 0) {
            int digit = temp_number % 10;
            if (digit == digit_to_find) {
                count++;
            }
            temp_number /= 10;
        }
    }
    printf("So chu so %d xuat hien %d lan trong so %d.\n", digit_to_find, count, number);
    return 0;
}