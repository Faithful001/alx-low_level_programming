#include "main.h"

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

int main(void)
{
    char c = 'A';

    if (_isupper(c))
        _putchar('1');
    else
        _putchar('0');

    _putchar('\n');

    return (0);
}
