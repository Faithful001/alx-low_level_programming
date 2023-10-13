#include "main.h"

void print_most_numbers(void)
{
    int number = 0;

    while (number <= 9)
    {
        if (number != 2 && number != 4)
            _putchar(number + '0');
        number++;
    }

    _putchar('\n');
}


int main(void)
{
    print_most_numbers();

    return (0);
}
