#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *result = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return result;
}

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "world!";
	int i;
    _strcat(dest, src);

    for (i = 0; dest[i] != '\0'; i++)
    {
        _putchar(dest[i]);
    }
    _putchar('\n');

    return 0;
}
