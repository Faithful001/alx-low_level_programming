#include "main.h"

void reset_to_98(int *n) {
    *n = 98;
}

#include "main.h"

int main(void) {
    int n = 10;

    reset_to_98(&n);

    _putchar(n / 10 + '0');
    _putchar(n % 10 + '0');
    _putchar('\n');

    return (0);
}
