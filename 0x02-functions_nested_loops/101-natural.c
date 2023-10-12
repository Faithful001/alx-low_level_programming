#include "main.h"

int main(void)
{
    int result;

    result = sum_of_multiples();
    _putchar((result / 1000) + '0');
    _putchar(((result / 100) % 10) + '0');
    _putchar(((result / 10) % 10) + '0');
    _putchar((result % 10) + '0');
    _putchar('\n');

    return (0);
}

