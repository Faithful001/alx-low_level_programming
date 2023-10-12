#include "main.h"

/**
 * sum_of_multiples - Computes the sum of multiples of 3 or 5 below 1024
 *
 * Return: The sum of multiples of 3 or 5
 */
int sum_of_multiples(void)
{
    int sum = 0;
    int i;

    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    return sum;
}

