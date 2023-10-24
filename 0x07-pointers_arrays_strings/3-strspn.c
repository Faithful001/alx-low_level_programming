#include "main.h"
#include <stddef.h>

int main(void)
{
    char *s = "Hello, world!";
    char *accept = "Helo, wrd";

    unsigned int length = _strspn(s, accept);

    _putchar('The length is: ' + length);

    // Convert the length to characters and print
    if (length == 0)
    {
        _putchar('0');
    }
    else
    {
        unsigned int temp = length;
        unsigned int digit;
        while (temp > 0)
        {
            digit = temp % 10;
            temp = temp / 10;
            _putchar(digit + '0');
        }
    }

    _putchar('\n');

    return 0;
}

