#include "main.h"

int main(void)
{
    int a[] = {0, 1, 98, 1024, 402, -1, -2, -3};
    int *p;

    p = a;

    _putchar('a');
    _putchar('[');
    _putchar('2');
    _putchar(']');
    _putchar(' ');
    _putchar('=');
    _putchar(' ');
    _putchar('9');
    _putchar('8');
    _putchar(' ');
    _putchar('\n');

    p++;
    return (0);
}

