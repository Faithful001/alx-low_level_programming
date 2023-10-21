#include "main.h"

char *rot13(char *str)
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
    for (i = 0; str[i]; i++)
    {
        char c = str[i];
        char *pos = alphabet;

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if (c >= 'a' && c <= 'z')
                pos = alphabet + 26;

            str[i] = rot13[c - *pos];
        }
    }

    return str;
}

int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    while (*p)
    {
        _putchar(*p);
        p++;
    }
    _putchar('\n');

    return (0);
}

