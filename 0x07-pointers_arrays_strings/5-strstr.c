#include "main.h"
#include <stddef.h>

int main(void)
{
	char *haystack = "Hello, world!";
	char *needle = "world";

	char *result = _strstr(haystack, needle);

	if (result)
	{
		while (*result)
		{
			_putchar(*result);
			result++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('N');
		_putchar('o');
		_putchar('t');
		_putchar(' ');
		_putchar('f');
		_putchar('o');
		_putchar('u');
		_putchar('n');
		_putchar('d');
		_putchar('\n');
	}

	return (0);
}

