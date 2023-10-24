#include "main.h"
#include <stddef.h>

int main(void)
{
    char *str = "Hello, world!";
    char *result;
    char search = 'w';

    result = _strchr(str, search);

    if (result != (char *)0) // Use 0 instead of NULL
        _putchar(*result);
    else
        _putchar('N'); // Print 'N' if character not found

    _putchar('\n'); // Print a newline character

    return 0;
}

