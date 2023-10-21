#include <unistd.h>
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    char *result = dest;
    
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
    char dest[100];
    char src[] = "This is a test string";
    int n = 10;
	int i;
    _strncpy(dest, src, n);

    for (i = 0; dest[i] != '\0'; i++)
    {
        _putchar(dest[i]);
    }
    _putchar('\n');

    return 0;
}
