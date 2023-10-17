#include "main.h"

void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int num1 = 5;
    int num2 = 10;

    swap_int(&num1, &num2);

    _putchar(num1 / 10 + '0');
    _putchar(num1 % 10 + '0');
    _putchar(' ');
    _putchar(num2 / 10 + '0');
    _putchar(num2 % 10 + '0');
    _putchar('\n');

    return (0);
}
