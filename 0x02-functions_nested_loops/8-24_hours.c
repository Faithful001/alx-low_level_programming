#include "main.h"

void jack_bauer(void)
{
    int h, m;

    for (h = 0; h < 24; h++)
    {
        for (m = 0; m < 60; m++)
        {
            _putchar((h / 10) + '0');    /* Print the tens digit of the hour */
            _putchar((h % 10) + '0');    /* Print the ones digit of the hour */
            _putchar(':');
            _putchar((m / 10) + '0');    /* Print the tens digit of the minute */
            _putchar((m % 10) + '0');    /* Print the ones digit of the minute */
            _putchar('\n');
        }
    }
}

