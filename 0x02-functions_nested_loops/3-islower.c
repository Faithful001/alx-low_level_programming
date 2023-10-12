#include "main.h"

int main(void)
{
    char c;

    c = 'a';
    _putchar(_islower(c) + '0');

    c = 'A';
    _putchar(_islower(c) + '0');

    _putchar('\n');

    return (0);
}

