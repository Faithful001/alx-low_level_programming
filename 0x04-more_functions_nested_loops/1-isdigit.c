#include "main.h"

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}


int main(void)
{
    char c = '5';

    if (_isdigit(c))
        _putchar('1');
    else
        _putchar('0');

    _putchar('\n');

    return (0);
}
