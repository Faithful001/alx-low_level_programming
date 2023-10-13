#include "main.h"

void print_numbers(void)
{
    int number = 0;

    while (number <= 9)
    {
        _putchar(number + '0');
        number++;
    }

    _putchar('\n');
}

int main(void)
{
    print_numbers();

    return (0);
}
