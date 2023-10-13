#include "main.h"

void print_line(int n)
{
    if (n > 0) {
        while (n > 0) {
            _putchar('_');
            n--;
        }
    }
    _putchar('\n');
}

int main(void)
{
    int length = 5;

    print_line(length);

    return (0);
}
