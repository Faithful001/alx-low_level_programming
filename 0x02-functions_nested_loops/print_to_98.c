#include "main.h"

void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != n)
                _putchar(',');
            _putchar(' ');
            if (i < 10)
                _putchar('0');
            if (i < 100)
                _putchar('0');
            if (i < 0)
                _putchar('-');
            if (i < 0)
                i = -i;
            if (i >= 10)
                _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i != n)
                _putchar(',');
            _putchar(' ');
            if (i < 10)
                _putchar('0');
            if (i < 100)
                _putchar('0');
            if (i < 0)
                _putchar('-');
            if (i < 0)
                i = -i;
            if (i >= 10)
                _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
        }
    }
    _putchar('\n');
}

