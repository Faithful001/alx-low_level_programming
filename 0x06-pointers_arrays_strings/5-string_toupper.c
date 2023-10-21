#include "main.h"

char *string_toupper(char *str)
{
    char *p = str;

    while (*p)
    {
        if (*p >= 'a' && *p <= 'z')
            *p = *p - 32;
        p++;
    }

    return str;
}

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    while (*ptr)
    {
        _putchar(*ptr);
        ptr++;
    }

    return (0);
}
