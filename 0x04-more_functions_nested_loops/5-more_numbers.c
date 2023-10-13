#include "main.h"

void more_numbers(void)
{
    int i, num;

    for (i = 0; i < 10; i++) // Loop to print 10 times
    {
        for (num = 0; num <= 14; num++) // Loop to print numbers from 0 to 14
        {
            if (num > 9) // For numbers greater than 9, print the tens digit
                _putchar(num / 10 + '0');
            _putchar(num % 10 + '0');
        }
        _putchar('\n'); // New line after each iteration
    }
}

int main(void)
{
    more_numbers();

    return (0);
}
