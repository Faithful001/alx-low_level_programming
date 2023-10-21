#include "main.h"

int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i]; i++)
    {
        if (c == separators[i])
            return (1);
    }

    return (0);
}

char *cap_string(char *str)
{
    int cap_next = 1;
    char *p = str;

    while (*p)
    {
        if (is_separator(*p))
        {
            cap_next = 1;
        }
        else if (cap_next && *p >= 'a' && *p <= 'z')
        {
            *p -= 32;
            cap_next = 0;
        }
        else
        {
            cap_next = 0;
        }

        p++;
    }

    return str;
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    while (*ptr)
    {
        _putchar(*ptr);
        ptr++;
    }

    return (0);
}

