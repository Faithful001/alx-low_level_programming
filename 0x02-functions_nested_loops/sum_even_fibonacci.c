#include "main.h"

long sum_even_fibonacci(void)
{
    long sum = 0;
    long fib1 = 1, fib2 = 2, next;

    while (fib2 <= 4000000)
    {
        if (fib2 % 2 == 0)
            sum += fib2;

        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    return sum;
}

