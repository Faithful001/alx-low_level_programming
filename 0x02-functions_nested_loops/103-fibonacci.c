#include "main.h"

int main(void)
{
    long result;

    result = sum_even_fibonacci();
    _putchar((result / 1000000) + '0');
    _putchar((result / 100000) % 10 + '0');
    _putchar((result / 10000) % 10 + '0');
    _putchar((result / 1000) % 10 + '0');
    _putchar((result / 100) % 10 + '0');
    _putchar((result / 10) % 10 + '0');
    _putchar(result % 10 + '0');
    _putchar('\n');

    return (0);
}

