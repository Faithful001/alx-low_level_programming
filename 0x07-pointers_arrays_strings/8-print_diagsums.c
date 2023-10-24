#include "main.h"

void print_diagsums(int *a, int size)
{
    int i;
    int sum1 = 0;
    int sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i]; 
        sum2 += a[i * size + (size - 1 - i)]; // Sum of the other diagonal (top-right to bottom-left)
    }

    // Print the sums
    _putchar('0' + (sum1 / 10));
    _putchar('0' + (sum1 % 10));
    _putchar(',');
    _putchar(' ');
    _putchar('0' + (sum2 / 10));
    _putchar('0' + (sum2 % 10));
    _putchar('\n');
}

int main(void)
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    print_diagsums((int *)matrix, 3);

    return (0);
}

