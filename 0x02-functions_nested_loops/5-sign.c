#include "main.h"

int main(void)
{
    int number;

    number = 5;
    _putchar(print_sign(number));
    _putchar('\n');

    number = 0;
    _putchar(print_sign(number));
    _putchar('\n');

    number = -7;
    _putchar(print_sign(number));
    _putchar('\n');

    return (0);
}

