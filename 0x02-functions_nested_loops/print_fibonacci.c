#include "main.h"

void print_fibonacci(void)
{
    long int fib1 = 1, fib2 = 2, next;
    int count;

    for (count = 1; count <= 50; count++)
    {
        if (count < 50)
        {
            _putchar(fib1 / 1000000 + '0');
            _putchar((fib1 / 100000) % 10 + '0');
            _putchar((fib1 / 10000) % 10 + '0');
            _putchar((fib1 / 1000) % 10 + '0');
            _putchar((fib1 / 100) % 10 + '0');
            _putchar((fib1 / 10) % 10 + '0');
            _putchar(fib1 % 10 + '0');
            _putchar(',');
            _putchar(' ');
        }
        else
        {
            _putchar(fib1 / 1000000 + '0');
            _putchar((fib1 / 100000) % 10 + '0');
            _putchar((fib1 / 10000) % 10 + '0');
            _putchar((fib1 / 1000) % 10 + '0');
            _putchar((fib1 / 100) % 10 + '0');
            _putchar((fib1 / 10) % 10 + '0');
            _putchar(fib1 % 10 + '0');
        }

        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    _putchar('\n');
}

