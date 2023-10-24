#include "main.h"

void set_string(char **s, char *to)
{
    *s = to;
}

int main(void)
{
    char *str1 = "Hello, World!";
    char *str2 = "New Value";

    set_string(&str1, str2);

    while (*str1)
    {
        _putchar(*str1);
        str1++;
    }

    _putchar('\n');

    return (0);
}

