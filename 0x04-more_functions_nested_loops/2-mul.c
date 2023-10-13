#include "main.h"

int mul(int a, int b)
{
    return (a * b);
}

int main(void)
{
    int result;
    int num1 = 5;
    int num2 = 7;
    result = mul(num1, num2);
    /* Print the result */
    _putchar(result + '0');
    _putchar('\n');

    return (0);
}
