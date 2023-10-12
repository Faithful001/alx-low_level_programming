#include "main.h"

void print_fibonacci_two(void)
{
    unsigned long a = 1, b = 2, c = 0;
    int count;

    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');

    for (count = 3; count <= 98; count++)
    {
        c = a + b;
        a = b;
        b = c;

        _putchar(',');
        _putchar(' ');
        
        if (c >= 1000000)
        {
            _putchar((c / 1000000) + '0');
            _putchar((c / 100000) % 10 + '0');
            _putchar((c / 10000) % 10 + '0');
            _putchar((c / 1000) % 10 + '0');
            _putchar((c / 100) % 10 + '0');
            _putchar((c / 10) % 10 + '0');
            _putchar(c % 10 + '0');
        }
        else
        {
            _putchar('0');
            _putchar(c + '0');
        }
    }

    _putchar('\n');
}

