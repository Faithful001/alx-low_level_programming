#include "main.h"

int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' || *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }

    return 0;
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    _putchar(_strcmp(s1, s2) + '0');
    _putchar('\n');
    _putchar(_strcmp(s2, s1) + '0');
    _putchar('\n');
    _putchar(_strcmp(s1, s1) + '0');
    _putchar('\n');

    return (0);
}

