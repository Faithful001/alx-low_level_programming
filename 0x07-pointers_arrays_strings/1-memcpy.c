#include "main.h"

int main(void)
{
    char src[10] = "Hello";
    char dest[10];

    _memcpy(dest, src, 5);
	
	int i;
    for (i = 0; i < 5; i++) {
        _putchar(dest[i]);
    }

    _putchar('\n');

    return 0;
}

