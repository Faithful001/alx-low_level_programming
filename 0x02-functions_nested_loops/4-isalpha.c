#include "main.h"

int main(void)
{
    char c;

    c = 'a';
    _putchar(_isalpha(c) + '0');

    c = '1';
    _putchar(_isalpha(c) + '0');

    _putchar('\n');

    return (0);
}

