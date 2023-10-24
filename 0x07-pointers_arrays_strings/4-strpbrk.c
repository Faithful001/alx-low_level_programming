#include "main.h"
#include <stddef.h>

int main(void)
{
    char *s = "Hello, world!";
    char *accept = "o, ";

    char *result = _strpbrk(s, accept);

    if (result != NULL)
    {
        _putchar(*result);
    }
    else
    {
        _putchar('N'); // Print 'N' if no matching byte is found
    }

    _putchar('\n'); // Print a newline character

    return 0;
}

