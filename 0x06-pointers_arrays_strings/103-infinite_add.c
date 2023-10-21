#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, carry = 0;

    for (i = 0, j = 0; i < size_r - 1 && (n1[i] || n2[j] || carry); i++, j++)
    {
        int sum = (n1[i] ? n1[i] - '0' : 0) + (n2[j] ? n2[j] - '0' : 0) + carry;
        carry = sum / 10;
        r[i] = (sum % 10) + '0';
    }

    if (i == size_r - 1 && (n1[i] || n2[j] || carry))
        return (0);

    r[i] = '\0';

    return r;
}

int main(void)
{
    char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    char r[100];
    char r2[10];
    char r3[11];
    char *res;

    res = infinite_add(n, m, r, 100);
    if (res == 0)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
    }
    else
    {	
		int i;
        for (i = 0; res[i]; i++)
            _putchar(res[i]);
        _putchar('\n');
    }

    n = "1234567890";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
    }
    else
    {
		int i;
        for (i = 0; res[i]; i++)
            _putchar(res[i]);
        _putchar('\n');
    }

    n = "999999999";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
    }
    else
    {
		int i;
        for (i = 0; res[i]; i++)
            _putchar(res[i]);
        _putchar('\n');
    }

    res = infinite_add(n, m, r3, 11);
    if (res == 0)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
    }
    else
    {
		int i;
        for (i = 0; res[i]; i++)
            _putchar(res[i]);
        _putchar('\n');
    }

    return (0);
}

