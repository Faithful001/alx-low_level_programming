#include "main.h"

void print_buffer(char *b, int size)
{
    int i, j;

    for (i = 0; i < size; i += 10)
    {
        _putchar(((i >> 24) & 0xFF) + '0');
        _putchar(((i >> 16) & 0xFF) + '0');
        _putchar(((i >> 8) & 0xFF) + '0');
        _putchar((i & 0xFF) + '0');
        _putchar(':');
        _putchar(' ');

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                _putchar(((b[i + j] >> 4) & 0xF) + '0');
                _putchar((b[i + j] & 0xF) + '0');
            }
            else
            {
                _putchar(' ');
                _putchar(' ');
            }

            if (j % 2 != 0)
                _putchar(' ');
        }

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                if (b[i + j] >= 32 && b[i + j] <= 126)
                    _putchar(b[i + j]);
                else
                    _putchar('.');
            }
            else
            {
                _putchar(' ');
            }
        }

        _putchar('\n');
    }

    if (size <= 0)
        _putchar('\n');
}


int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    int i;
    for (i = 0; buffer[i]; i++)
        _putchar(buffer[i]);
    _putchar('\n');
    for (i = 0; i < 41; i++)
        _putchar('-');
    _putchar('\n');

    print_buffer(buffer, sizeof(buffer));

    return (0);
}

