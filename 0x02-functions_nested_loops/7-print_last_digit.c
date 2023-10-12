#include "main.h"

int main(void)
{
    int number;

    number = -123;
    _putchar(print_last_digit(number) + '0');
    _putchar('\n');

    number = 0;
    _putchar(print_last_digit(number) + '0');
    _putchar('\n');

    number = 789;
    _putchar(print_last_digit(number) + '0');
    _putchar('\n');

    return (0);
}

