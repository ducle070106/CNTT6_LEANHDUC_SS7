#include <stdio.h>
#include <math.h>

int is_armstrong_number(int number) {
    if (number < 0) {
        return 0;
    }
    int original_number = number;
    int number_of_digits = 0;
    int temp_number = number;
    while (temp_number != 0) {
        temp_number /= 10;
        number_of_digits++;
    }
    int sum = 0;
    temp_number = number;
    while (temp_number != 0) {
        int digit = temp_number % 10;
        sum += pow(digit, number_of_digits);
        temp_number /= 10;
    }
    if (sum == original_number) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int input_number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &input_number);
    if (is_armstrong_number(input_number)) {
        printf("%d la so Armstrong.\n", input_number);
    } else {
        printf("%d khong phai la so Armstrong.\n", input_number);
    }
    return 0;
}