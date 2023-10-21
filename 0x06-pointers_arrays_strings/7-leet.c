#include "main.h"

char *leet(char *str)
{
    int i;
    char leet_map[] = "44337711";
    for (i = 0; str[i]; i++)
    {
        char c = str[i];
        char l = 'a';

        if (c >= 'A' && c <= 'Z')
            l = 'A';

        if (c >= 'a' && c <= 'z')
        {
            if (c == 'e' || c == 'E' || c == 'a' || c == 'A' || c == 'o' || c == 'O' || c == 't' || c == 'T' || c == 'l' || c == 'L')
            {
                str[i] = leet_map[c - l];
            }
        }
    }

    return str;
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    while (*p)
    {
        _putchar(*p);
        p++;
    }

    return (0);
}

