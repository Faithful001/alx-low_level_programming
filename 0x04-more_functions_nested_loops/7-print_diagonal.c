#include "main.h"

void print_diagonal(int n)
{
    int i, spaces;

    if (n <= 0) {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++) {
        for (spaces = 0; spaces < i; spaces++) {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}

int main(void)
{
    int length = 5;

    print_diagonal(length);

    return (0);
}
