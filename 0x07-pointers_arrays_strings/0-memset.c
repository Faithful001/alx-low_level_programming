#include "main.h"

int main(void)
{
    char buffer[98] = {0x00};

    _memset(buffer, 'H', 5);

	int i;
    for (i = 0; i < 5; i++) {
        _putchar(buffer[i]);
    }

    _putchar('\n');

    return (0);
}
