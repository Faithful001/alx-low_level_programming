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
    char s1[98] = "First, solve the problem. Then, write the code\n", 5);
	char *ptr
	int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    _putchar("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    _putchar("%s\n", s1);
    _putchar("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    _putchar("%s", s1);
    _putchar("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            _putchar(" ");
        }
        if (!(i % 10) && i)
        {
            _putchar("\n");
        }
        _putchar("0x%02x", s1[i]);
    }
    _putchar("\n");

    return 0;
}
