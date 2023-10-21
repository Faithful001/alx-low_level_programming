#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *result = dest;
	
    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return result;
}

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "world!";
    int n = 3;
	int i;
    _strncat(dest, src, n);

    for (i = 0; dest[i] != '\0'; i++)
    {
        _putchar(dest[i]);
    }
    _putchar('\n');

    return 0;
}

